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

/**
 * @file MotorsDemo.ino
 * @brief MotorsDemo code file for controlling RubbleScout on an ESP32 (basic mouvements).
 * 
 * This file contains the MotorsDemo code for controlling the chassis of a robot using an ESP32 microcontroller. It includes functions for moving the motors, processing commands received via Bluetooth, and setting up the H-Bridge and PWM.
 * 
 * The code uses the BluetoothSerial library to establish a Bluetooth connection with a paired device. It reads data from the Bluetooth module and processes commands in the format "{X:Y}", where X and Y represent the desired speeds for the left and right motors respectively.
 * 
 * The H-Bridge pins and PWM channels are defined at the beginning of the code, and the move() function sets the direction and speed of the motors based on the input values.
 * 
 * This code also includes a failsafe mechanism that stops the motors if the Bluetooth connection is lost.
 * 
 * @author Templatew
 * @date 02-2024
 * @version 1.0
 */

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// H-Bridge

#define DIR1 15  // GPIO pin for the right motor direction
#define DIR2 16 // GPIO pin for the left motor direction
#define PW1 4  // GPIO pin for the right motor speed
#define PW2 17  // GPIO pin for the left motor speed

#define LEDC_CHANNEL_0 0
#define LEDC_CHANNEL_1 1
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

    ledcWrite(LEDC_CHANNEL_0, abs(speedRight));
    ledcWrite(LEDC_CHANNEL_1, abs(speedLeft));
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Bluetooth
#include "BluetoothSerial.h"
#define USE_PIN
const char *pin = "1234"; // Change this to a more secure PIN.

String device_name = "ESP32-BT-Slave";
BluetoothSerial SerialBT;

String incomingData = ""; 
bool commandStarted = false; 

/**
 * @brief Process a command received via Bluetooth.
 * 
 * This function processes a command received via Bluetooth in the format "{X:Y}",
 * where X and Y represent the desired speeds for the left and right motors respectively.
 * It extracts the X and Y values from the command string, converts them to integers,
 * and calculates the corresponding speeds for the motors.
 * The move() function is then called with the calculated speeds.
 * 
 * @param command The command string received via Bluetooth.
 */
void processCommand(String command) {
    int xIndex = command.indexOf('X'); // Find the index of 'X'
    int yIndex = command.indexOf('Y'); // Find the index of 'Y'
    
    if (xIndex != -1 && yIndex != -1) {
        
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
        move(pwmg,pwmd);
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void setup() {
    Serial.begin(115200);

    // Bluetooth
    SerialBT.begin(device_name); // Bluetooth device name
    Serial.printf("The device with name \"%s\" is started.\nNow you can pair it with Bluetooth!\n", device_name.c_str());
    #ifdef USE_PIN
        SerialBT.setPin(pin);
        Serial.println("Using PIN");
    #endif

    // H-Bridge
    pinMode(DIR1, OUTPUT);
    pinMode(DIR2, OUTPUT);

    // PWM Setup
    ledcSetup(LEDC_CHANNEL_0, LEDC_BASE_FREQ, LEDC_TIMER_8_BIT);
    ledcSetup(LEDC_CHANNEL_1, LEDC_BASE_FREQ, LEDC_TIMER_8_BIT);
    // Attach the channel to the GPIO to be controlled
    ledcAttachPin(PW1, LEDC_CHANNEL_0);
    ledcAttachPin(PW2, LEDC_CHANNEL_1);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
