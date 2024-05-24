/*
____/\\\\\\\\\______________________/\\\__________/\\\__________/\\\\\\_________________________/\\\\\\\\\\\_______________________________________________________________        
 __/\\\///////\\\___________________\/\\\_________\/\\\_________\////\\\_______________________/\\\/////////\\\_____________________________________________________________       
  _\/\\\_____\/\\\___________________\/\\\_________\/\\\____________\/\\\______________________\//\\\______\///____________________________________________________/\\\______      
   _\/\\\\\\\\\\\/______/\\\____/\\\__\/\\\_________\/\\\____________\/\\\_________/\\\\\\\\_____\////\\\______________/\\\\\\\\______/\\\\\______/\\\____/\\\___/\\\\\\\\\\\_     
    _\/\\\//////\\\_____\/\\\___\/\\\__\/\\\\\\\\\___\/\\\\\\\\\______\/\\\_______/\\\/////\\\_______\////\\\_________/\\\//////_____/\\\///\\\___\/\\\___\/\\\__\////\\\////__    
     _\/\\\____\//\\\____\/\\\___\/\\\__\/\\\////\\\__\/\\\////\\\_____\/\\\______/\\\\\\\\\\\___________\////\\\_____/\\\___________/\\\__\//\\\__\/\\\___\/\\\_____\/\\\______   
      _\/\\\_____\//\\\___\/\\\___\/\\\__\/\\\__\/\\\__\/\\\__\/\\\_____\/\\\_____\//\\///////_____/\\\______\//\\\___\//\\\_________\//\\\__/\\\___\/\\\___\/\\\_____\/\\\_/\\__  
       _\/\\\______\//\\\__\//\\\\\\\\\___\/\\\\\\\\\___\/\\\\\\\\\____/\\\\\\\\\___\//\\\\\\\\\\__\///\\\\\\\\\\\/_____\///\\\\\\\\___\///\\\\\/____\//\\\\\\\\\______\//\\\\\___ 
        _\///________\///____\/////////____\/////////____\/////////____\/////////_____\//////////_____\///////////_________\////////______\/////_______\/////////________\/////____
*/  

#include <Arduino.h>
#include "Stepper.h"
#include "HBridge.h"
#include "ServoMotor.h"
#include "BluetoothSerial.h"
#include <esp_task_wdt.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// H-Bridge

#define DIR1 15  // GPIO pin for the right motor direction
#define DIR2 16 // GPIO pin for the left motor direction
#define PW1 4  // GPIO pin for the right motor speed
#define PW2 17  // GPIO pin for the left motor speed

#define LEDC_CHANNEL_3 3
#define LEDC_CHANNEL_4 4
#define LEDC_TIMER_8_BIT 8
#define LEDC_BASE_FREQ 5000

/**
 * @brief Set the direction and speed of the motors.
 * 
 * This function sets the direction and speed of the motors based on the input values.
 * If the speed is negative, the corresponding motor will rotate in the opposite direction.
 * 
 * @param speedLeft The desired speed for the left motor (-255 to 255).
 * @param speedRight The desired speed for the right motor (-255 to 255).
 */
void move(int speedLeft, int speedRight) {
    // Set the direction of the motors 
    if (speedRight < 0) {
        digitalWrite(DIR1, HIGH);
    } 
    else {
        digitalWrite(DIR1, LOW);
    }

    if (speedLeft < 0) {
        digitalWrite(DIR2, HIGH);
    } 
    else {
        digitalWrite(DIR2, LOW);
    }

    ledcWrite(LEDC_CHANNEL_3, abs(speedRight));
    ledcWrite(LEDC_CHANNEL_4, abs(speedLeft));
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Bluetooth
#include "BluetoothSerial.h"
String deviceName = "ESP32-RubbleScout";
BluetoothSerial SerialBT;

String incomingData = ""; 
bool commandStarted = false; 

Stepper stepper;
HBridge hbridge;
ServoMotor servo;
BluetoothSerial BT;


// Lamp
const int PIN_LAMP = 2;


// Implémentation de la tâche de scan
void ScanTask(void *pvParameters) {
    esp_task_wdt_delete(NULL);
    stepper.setMicrosteps(8);
    stepper.setSpeed(100);
    const int thetaMin = 50;
    const int thetaMax = 110;
    const int thetaStep = 1; // Angle de pas pour le servo
    const double phiStep = stepper.getStepsAngle(); // Angle de pas pour le stepper

    for (int thetaDeg = thetaMin; thetaDeg <= thetaMax; thetaDeg += thetaStep) {
        servo.setAngle(thetaDeg);

        for (double phiDeg = 0; phiDeg < 360; phiDeg += phiStep) {
            stepper.step();
        }
    }
    vTaskDelete(NULL); // Supprimer la tâche si le scan est terminé
}


void processCommand(String command) {


    // Serial.println(command);
    int lIndex = command.indexOf('L'); // Find the index of 'L'
    int fIndex = command.indexOf('F');
    int oIndex = command.indexOf('O');
    int xIndex = command.indexOf('X'); // Find the index of 'X'
    int yIndex = command.indexOf('Y'); // Find the index of 'Y'

    if (lIndex != -1) {
        // Création de la tâche de scan
        xTaskCreatePinnedToCore(ScanTask, "ScanTask", 2048, NULL, 1, NULL, 0);
    }

    else if (fIndex != -1) {
        digitalWrite(PIN_LAMP, HIGH);
    }
    
    else if (oIndex != -1) {
        digitalWrite(PIN_LAMP, LOW);
    }
    
    else if (xIndex != -1 && yIndex != -1) {
        
        String xStr = command.substring(xIndex+1, yIndex);
        String yStr = command.substring(yIndex+1);

        int x = xStr.toInt(); 
        int y = yStr.toInt(); 
        int pwmg;
        int pwmd;
        if (y>0){
            x = -x;
        }
        pwmg = constrain(-y+x, -255, 255);
        pwmd = constrain(-y-x, -255, 255);
        hbridge.move(pwmg,pwmd);
    }
}

void Bluetooth(){

    // Read data from the Bluetooth module
    while (BT.available()) {
        char incomingByte = BT.read(); 

        // Check if the command has started or ended
        if (incomingByte == '{') {
            commandStarted = true; 
            incomingData = ""; 
        }
        else if (incomingByte == '}' && commandStarted) {
            commandStarted = false; 
            processCommand(incomingData); 
        } 
        else if (commandStarted) {
            incomingData += incomingByte; 
        }
    }
    // FailSafe if connection is lost
    if (!BT.connected(1000)) {
        hbridge.move(0,0);
    }
}

void setup() {

    Serial.begin(115200);
    stepper.begin();
    hbridge.begin();
    servo.begin();
    BT.begin(deviceName);

    // H-Bridge
    pinMode(DIR1, OUTPUT);
    pinMode(DIR2, OUTPUT);

    // PWM Setup
    ledcSetup(LEDC_CHANNEL_3, LEDC_BASE_FREQ, LEDC_TIMER_8_BIT);
    ledcSetup(LEDC_CHANNEL_4, LEDC_BASE_FREQ, LEDC_TIMER_8_BIT);
    // Attach the channel to the GPIO to be controlled
    ledcAttachPin(PW1, LEDC_CHANNEL_3);
    ledcAttachPin(PW2, LEDC_CHANNEL_4);

    // Dans setup() avant de créer les tâches
    esp_task_wdt_init(1000, true); // Définis le timeout du WDT à 60 secondes
    
    // lamp
    pinMode(PIN_LAMP, OUTPUT);
    }

void loop() {

    // Read data from the Bluetooth module
    while (SerialBT.available()) {
        char incomingByte = SerialBT.read(); 

        // Check if the command has started or ended
        if (incomingByte == '{') {
            commandStarted = true; 
            incomingData = ""; 
        }
        else if (incomingByte == '}' && commandStarted) {
            commandStarted = false; 
            processCommand(incomingData); 
        } 
        else if (commandStarted) {
            incomingData += incomingByte; 
        }
    }
    // FailSafe if connection is lost
    if (!SerialBT.connected(1000)) {
        move(0,0);
    }
    
}