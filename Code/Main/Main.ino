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

#include "BluetoothSerial.h"
#include <Wire.h>
// #include <Servo.h>
// Include Libraries
#include "Arduino.h"
#include "LIDARLite.h"
#include "Wire.h"
#include <SPI.h>
// #include <SD.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// H-Bridge

#define DIR1 15  // GPIO pin for the right motor direction
#define DIR2 16 // GPIO pin for the left motor direction
#define PW1 4  // GPIO pin for the right motor speed
#define PW2 17  // GPIO pin for the left motor speed

#define LEDC_CHANNEL_0 0 // PWM channel for the right motor
#define LEDC_CHANNEL_1 1 // PWM channel for the left motor
#define LEDC_TIMER_8_BIT 8 // PWM resolution
#define LEDC_BASE_FREQ 5000 


void setupHbridge() {
    pinMode(DIR1, OUTPUT);
    pinMode(DIR2, OUTPUT);
    ledcSetup(LEDC_CHANNEL_0, LEDC_BASE_FREQ, LEDC_TIMER_8_BIT);
    ledcSetup(LEDC_CHANNEL_1, LEDC_BASE_FREQ, LEDC_TIMER_8_BIT);
    ledcAttachPin(PW1, LEDC_CHANNEL_0);
    ledcAttachPin(PW2, LEDC_CHANNEL_1);
}

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
#define USE_PIN
const char *pin = "1234"; // Change this to a more secure PIN.

String device_name = "ESP32-BT-Slave";
BluetoothSerial SerialBT;

String incomingData = ""; 
bool commandStarted = false; 

void setupBluetooth() {
    SerialBT.begin(device_name); // Bluetooth device name
    // Serial.printf("The device with name \"%s\" is started.\nNow you can pair it with Bluetooth!\n", device_name.c_str());
    #ifdef USE_PIN
        SerialBT.setPin(pin);
        // Serial.println("Using PIN");
    #endif
}

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

void BluetoothTask(void *pvParameters) {
  for (;;) { // Boucle infinie de la tâche
    // Lecture des données depuis le module Bluetooth
    while (SerialBT.available()) {
      char incomingByte = SerialBT.read();

      // Vérification du début ou de la fin de la commande
      if (incomingByte == '{') {
        commandStarted = true;
        incomingData = "";
      } else if (incomingByte == '}' && commandStarted) {
        commandStarted = false;
        processCommand(incomingData);
      } else if (commandStarted) {
        incomingData += incomingByte;
      }
    }

    // FailSafe en cas de perte de connexion
    if (!SerialBT.connected(1000)) {
      move(0,0); // Appel à une fonction de secours en cas de perte de connexion
      Serial.println("Connection Lost. Failsafe activated.");
    }

    delay(10); // Léger délai pour éviter de surcharger le cœur
  }
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Servo

// Servo servo; // Create a servo object to control the pan-tilt mechanism
#define ANGLE_MIN 1000 // Minimum angle for servo in microseconds (0 degrees = 500 microseconds)
#define ANGLE_MAX 1600 // Maximum angle for servo in microseconds (180 degrees = 2500 microseconds)
#define ANGLE_MOY (ANGLE_MAX + ANGLE_MIN) / 2 // Middle angle for servo in microseconds

#define ANGLE_MIN_DEG map(ANGLE_MIN, 500, 2500, 0, 180) // Minimum angle for servo in degrees
#define ANGLE_MAX_DEG map(ANGLE_MAX, 500, 2500, 0, 180) // Maximum angle for servo in degrees

#define RANGE_MICROSECONDS ANGLE_MAX - ANGLE_MIN // Range of servo in microseconds
#define RANGE_DEGREES ANGLE_MAX_DEG - ANGLE_MIN_DEG // Range of servo in degrees

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Stepper motor

// Stepper motor pins
#define STEP 33
#define DIR 32
#define MS1 26
#define MS2 25

const double STEPS_ANGLE_DEFAULT = 1.8; // Number of degrees per step in default mode
int microsteps = 16; // Number of microsteps per step
double stepsAngle = STEPS_ANGLE_DEFAULT / microsteps; // Number of degrees per step
int stepsPerRev = 360 / stepsAngle; // Number of steps per revolution
#define MAX_DELAY 2000 // Maximum delay between steps in microseconds
#define MIN_DELAY 170 // Minimum delay between steps in microseconds
int delayStepperMotor = 500; // Delay between steps in microseconds

void setupStepper() {
    // Set pin modes
    pinMode(STEP, OUTPUT);
    pinMode(DIR, OUTPUT);
    pinMode(MS1, OUTPUT);
    pinMode(MS2, OUTPUT);
}

void step(int steps) {
    // Set direction
    if (steps < 0) {
        digitalWrite(DIR, HIGH);
    } 
    else {
        digitalWrite(DIR, LOW);
    }
    // Step
    for (int i = 0; i < abs(steps); i++) {
        digitalWrite(STEP, HIGH);
        delayMicroseconds(delayStepperMotor);
        digitalWrite(STEP, LOW);
        delayMicroseconds(delayStepperMotor);
    }
}



void setSpeed(int speed) {
    // Set delay between steps
    delayStepperMotor = map(speed, 0, 100, (MAX_DELAY*8)/microsteps, (MIN_DELAY * 8)/microsteps);
}

void setPrecision(int precision) {
    // Set microsteps
    switch(precision) {
        case 8:
            // 8 microsteps
            microsteps = 8;
            digitalWrite(MS1, LOW);
            digitalWrite(MS2, LOW);
            break;
        case 16:
            // 16 microsteps
            microsteps = 16;
            digitalWrite(MS1, HIGH);
            digitalWrite(MS2, HIGH);
            break;
        case 32:
            // 32 microsteps
            microsteps = 32;
            digitalWrite(MS1, HIGH);
            digitalWrite(MS2, LOW);
            break;
        case 64:
            // 64 microsteps
            microsteps = 64;
            digitalWrite(MS1, LOW);
            digitalWrite(MS2, HIGH);
            break;
        default:
            // Default to 16 microsteps
            microsteps = 16;
            digitalWrite(MS1, HIGH);
            digitalWrite(MS2, HIGH);
            break;
    }
    stepsAngle = STEPS_ANGLE_DEFAULT / microsteps; // Number of degrees per step
    stepsPerRev = 360 / stepsAngle;
    setSpeed(10);
    
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// IR sensor
#define IR_THRESHOLD 90 // Threshold for IR sensor

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// SD card
#define FILENAME "data.txt" // Name of file to save data to
// File dataFile; // File to save data to

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Lidar Lite v3
LIDARLite myLidarLite;
double cartesian[3]; // Cartesian coordinates

void setupLidar() {
    // Initialize Lidar Lite v3
    myLidarLite.begin(0, true);
    myLidarLite.configure(0);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void setup() {
    Serial.begin(115200);

    // // Bluetooth
    // SerialBT.begin(device_name); // Bluetooth device name
    // Serial.printf("The device with name \"%s\" is started.\nNow you can pair it with Bluetooth!\n", device_name.c_str());
    // #ifdef USE_PIN
    //     SerialBT.setPin(pin);
    //     Serial.println("Using PIN");
    // #endif

    // H-Bridge
    setupHbridge();

    // Bluetooth
    setupBluetooth();

    // Stepper
    setupStepper();

    setPrecision(8);

    setSpeed(100);

    setupLidar();
 
    xTaskCreatePinnedToCore(
        BluetoothTask,    // Fonction de la tâche
        "BluetoothTask",  // Nom de la tâche
        10000,            // Taille de la pile (en mots)
        NULL,             // Paramètre de la tâche
        1,                // Priorité de la tâche
        NULL,             // Handle de la tâche
        0                 // Cœur ciblé (0 ou 1)
    );
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void loop() {

    step(1);
    
    
}
