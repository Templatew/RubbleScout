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

/*  
    Author : https://github.com/Templatew
    Date : 02-2024
    Version : 1.0
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Include the libraries, you'll need to install the LIDARLite by Garmin and SD by Arduino libraries using the library manage in the Arduino IDE.

#include <Arduino.h>
#include <SoftwareSerial.h>
#include <Wire.h>
#include <Servo.h>
#include <LIDARLite.h>
#include <SPI.h>
#include <SD.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Define the pins for the Arduino Uno R3

// Double H-Bridge pins
#define DIR1 7
#define DIR2 4
#define PWM1 6
#define PWM2 5

// Servo pins
#define SERVO 9

// Stepper motor pins
#define STEP 15
#define DIR 14

// IR sensor pins
#define IR1 A2

// SD card pins
#define SD_CS 10 // SD card chip select pin

// Bluetooth pins
#define BT_RX 3 // Bluetooth receive pin
#define BT_TX 2 // Bluetooth transmit pin

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Define variables

// Servo
Servo servo;
#define ANGLE_MIN 1000 // Minimum angle for servo in microseconds (0 degrees = 500 microseconds)
#define ANGLE_MAX 1600 // Maximum angle for servo in microseconds (180 degrees = 2500 microseconds)
#define ANGLE_MOY (ANGLE_MAX + ANGLE_MIN) / 2 // Middle angle for servo in microseconds

#define ANGLE_MIN_DEG map(ANGLE_MIN, 500, 2500, 0, 180) // Minimum angle for servo in degrees
#define ANGLE_MAX_DEG map(ANGLE_MAX, 500, 2500, 0, 180) // Maximum angle for servo in degrees

#define RANGE_MICROSECONDS ANGLE_MAX - ANGLE_MIN // Range of servo in microseconds
#define RANGE_DEGREES ANGLE_MAX_DEG - ANGLE_MIN_DEG // Range of servo in degrees

// Stepper motor
#define STEPS_ANGLE_DEFAULT 1.8 // Number of degrees per step in default mode
#define MICROSTEPS 16 // Number of microsteps per step
#define STEPS_ANGLE STEPS_ANGLE_DEFAULT / MICROSTEPS // Number of degrees per step
#define STEPS_REV 360 / STEPS_ANGLE // Number of steps per revolution
#define MAX_DELAY 1000 // Maximum delay between steps in microseconds
#define MIN_DELAY 300 // Minimum delay between steps in microseconds
int delayStepperMotor = 500; // Delay between steps in microseconds

// IR sensor
#define IR_THRESHOLD 100 // Threshold for IR sensor

// SD card
#define FILENAME "data.txt" // Name of file to save data to
File dataFile; // File to save data to

//Lidar Lite v3
LIDARLite myLidarLite;
double cartesian[3]; // Cartesian coordinates

// Bluetooth
SoftwareSerial BT(BT_RX, BT_TX); // RX, TX

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Define functions

// H-bridge

void setupHbridge() {
    // Set pin modes
    pinMode(DIR1, OUTPUT);
    pinMode(DIR2, OUTPUT);
    pinMode(PWM1, OUTPUT);
    pinMode(PWM2, OUTPUT);

    // Force STOP
    analogWrite(PWM1, 0);
    analogWrite(PWM2, 0);
}

void move(int speedLeft, int speedRight){
    // Set right motor direction based on speed
    if (speedRight < 0) {
        digitalWrite(DIR1, HIGH);
    } 
    else {
        digitalWrite(DIR1, LOW);
    }
    // Set left motor direction based on speed
    if (speedLeft < 0) {
        digitalWrite(DIR2, HIGH);
    } 
    else {
        digitalWrite(DIR2, LOW);
    }
    // Set motor speeds
    analogWrite(PWM1, abs(speedRight));
    analogWrite(PWM2, abs(speedLeft));
}

// Servo

void setupServo() {
    // Set pin mode
    pinMode(SERVO, OUTPUT);
    // Attach servo
    servo.attach(SERVO, ANGLE_MIN, ANGLE_MAX);
    // Set servo to middle angle
    servo.writeMicroseconds(ANGLE_MOY);
}

void setAngleServo(int microseconds) {
    // Set servo angle
    servo.writeMicroseconds(microseconds);
}

double degreesToRadians(int degrees) {
    // Convert degrees to radians
    return degrees * PI / 180;
}

double microsecondsToDegrees(int microseconds) {
    // Convert microseconds to degrees
    return map(microseconds, ANGLE_MIN, ANGLE_MAX, ANGLE_MIN_DEG, ANGLE_MAX_DEG);
}

double microsecondsToRadians(int microseconds) {
    // Convert microseconds to radians
    return degreesToRadians(microsecondsToDegrees(microseconds));
}

// Ir sensor

void setupIrSensor() {
    // Set pin mode
    pinMode(IR1, INPUT);
}

int readIrSensor() {
    // Return IR sensor value
    return analogRead(IR1);
}

bool isObstacle() {
    // Return true if obstacle detected
    return readIrSensor() > IR_THRESHOLD;
}

// Stepper motor

void setupStepper() {
    // Set pin modes
    pinMode(STEP, OUTPUT);
    pinMode(DIR, OUTPUT);

    // Set initial direction
    digitalWrite(DIR, HIGH);
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
    delayStepperMotor = map(speed, 0, 100, MAX_DELAY/MICROSTEPS, MIN_DELAY/MICROSTEPS);
}

void calibrateStepper() {
    // Set Speed
    setSpeed(30);
    // Calibrate stepper motor
    while(!isObstacle()) {
        step(-1);
    }
}

// SD card

void setupSD() {
    // Set pin mode
    pinMode(SD_CS, OUTPUT);
    // Initialize SD card
    SD.begin(SD_CS);
}

void createFile(char filename[]){
  dataFile = SD.open(filename, FILE_WRITE);
}

// void openFile(char filename[]) {
//     // Open file
//     dataFile = SD.open(FILENAME);
// }

void closeFile() {
    // Close file
    dataFile.close();
}

void writeToFile(char data[]) {
    // Write data to file
    dataFile.println(data);
}

void readFromFile(char filename[]) {
    // Open file
    File dataFile = SD.open(FILENAME);
    // Read data from file
    while (dataFile.available()) {
        Serial.write(dataFile.read());
    }
    // Close file
    dataFile.close();
}

// Bluetooth

void setupBluetooth() {
    // Initialize Bluetooth
    BT.begin(9600);
}

char readBluetooth() {
    // Return data from Bluetooth
    char data = 'N';
    if (BT.available()){
        data=BT.read();
    }
    return data;
}

// Lidar Lite v3

void setupLidar() {
    // Initialize Lidar Lite v3
    myLidarLite.begin(0, true);
    myLidarLite.configure(0);
}

int getDistanceLidar() {
    // Return distance in cm
    return myLidarLite.distance();
}

void setModeLidar(int mode) {
    /*
    configure(int configuration, char lidarliteAddress)

    Selects one of several preset configurations.

    Parameters
    ----------------------------------------------------------------------------
    configuration:  Default 0.
        0: Default mode, balanced performance.
        1: Short range, high speed. Uses 0x1d maximum acquisition count.
        2: Default range, higher speed short range. Turns on quick termination
            detection for faster measurements at short range (with decreased
            accuracy)
        3: Maximum range. Uses 0xff maximum acquisition count.
        4: High sensitivity detection. Overrides default valid measurement detection
            algorithm, and uses a threshold value for high sensitivity and noise.
        5: Low sensitivity detection. Overrides default valid measurement detection
            algorithm, and uses a threshold value for low sensitivity and noise.
    lidarliteAddress: Default 0x62. Fill in new address here if changed. See
        operating manual for instructions.
    */
    // Set mode
    myLidarLite.configure(mode);
}

void sphericalToCartesian(double r, double theta, double phi) {
    // Convert spherical coordinates to cartesian coordinates
    double x = r * sin(theta) * cos(phi);
    double y = r * sin(theta) * sin(phi);
    double z = r * cos(theta);

    cartesian[0] = x;
    cartesian[1] = y;
    cartesian[2] = z;
}

void scanLidar3D(char filename[]) {
    
    calibrateStepper();

    // Set speed
    setSpeed(50);

    // Set mode
    setModeLidar(0);

    // Set servo to minimum angle
    setAngleServo(ANGLE_MIN);

    // Open file
    createFile(filename);

    // Scan
    double distance; // Distance in cm
    int theta; // Angle in microseconds
    double phi; // Angle in degrees

    for (int theta = ANGLE_MIN; theta < ANGLE_MAX; theta++) {
        // Set servo angle
        setAngleServo(theta);
        
        for (int steps = 0; steps < STEPS_REV; steps++) {
            // Step
            step(1);
            // Get distance
            distance = getDistanceLidar();

            phi = steps * STEPS_ANGLE;
            // Convert to cartesian coordinates
            sphericalToCartesian(distance, microsecondsToRadians(theta), degreesToRadians(phi));

            // Write data to file
            // Format : x,y,z/n
            char charBuff[20];
            char x[5];
            dtostrf(cartesian[0], 1, 4, x);
            char y[5];
            dtostrf(cartesian[1], 1, 4, y);
            char z[5];
            dtostrf(cartesian[2], 1, 4, z);
            strcat(charBuff, x);
            strcat(charBuff, ", ");
            strcat(charBuff, y);
            strcat(charBuff, ", ");
            strcat(charBuff, z);
            strcat(charBuff, "\n");
            writeToFile(charBuff);
        }
    }

    // Close file
    closeFile();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Setup

void setup() {
    // Initialize serial communication
    Serial.begin(9600);

    // Setup H-bridge
    setupHbridge();

    // Setup servo
    setupServo();

    // Setup IR sensor
    setupIrSensor();

    // Setup stepper motor
    setupStepper();

    // Setup SD card
    setupSD();

    // Setup Bluetooth
    setupBluetooth();

    // Setup Lidar Lite v3
    setupLidar();

    // // test SD
    // createFile(FILENAME);
    // writeToFile(FILENAME, "Hello, world!");
    // closeFile();
    
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Loop

void loop() {
    

    char data = readBluetooth();
    
    switch(data) {

        case 'F':
            move(255, 255);
            break;

        case 'B':
            move(-255, -255);
            break;

        case 'L':
            move(-255, 255);
            break;

        case 'R':
            move(255, -255);
            break;

        case 'S':
            move(0, 0);
            break;

        case 'C':
            calibrateStepper();
            break;
        
        case 'D':
            scanLidar3D(FILENAME);
            break;

        default:
            move(0, 0);
            break;
    }


}



