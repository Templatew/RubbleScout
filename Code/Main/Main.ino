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
#include "LIDARLite.h"
#include "HBridge.h"
#include "SDCard.h"
#include "ServoMotor.h"
#include "BluetoothSerial.h"


Stepper stepper;
LIDARLite lidar;
HBridge hbridge;
SDCard sdcard;
ServoMotor servo;
BluetoothSerial BT;

String deviceName = "ESP32-RubbleScout";
const char *pin = "123456";
String incomingData = "";
bool commandStarted = false;
int ledPin = 2;


void scanLidar(){
    
    stepper.setMicrosteps(8);
    stepper.setSpeed(30);

    // // Write something on sd card
    // sdcard.write("Hello World");
    // // append to the file
    // sdcard.appendFile(SD, "/data.txt", "test");
    // // read the file

    int distance = 0;
    double phiDeg = 0;
    double theta = 0;
    double phi = 0;
    int stepsPerRev = stepper.getStepsPerRev();
    double stepsAngle = stepper.getStepsAngle();
    int stepSize = 16;
    int servoPrecision = 4;
    double cartesian[3];
    double spherical[3];
    String data = "";
    sdcard.write("x, y, z\n");
    

    for (int thetaDeg = 30; thetaDeg <= 160; thetaDeg+=servoPrecision){

        servo.setAngle(thetaDeg);

        for (int steps = 0; steps < stepsPerRev; steps+=stepSize){
            
            stepper.step(stepSize);
            distance = lidar.distance();
            delay(1);

            phiDeg = steps * stepsAngle;
            theta = servo.degreeToRadian(thetaDeg);
            phi = servo.degreeToRadian(phiDeg);

            spherical[0] = distance;
            spherical[1] = theta;
            spherical[2] = phi;


            // Serial.println("Distance: " + String(distance) + " Theta: " + String(thetaDeg) + " Phi: " + String(phiDeg));

            servo.sphericalToCartesian(spherical, cartesian);

            // Write to sd card the cartesian coordinates like so : x, y, z + /n
            data = String(cartesian[0]) + ", " + String(cartesian[1]) + ", " + String(cartesian[2]) + "\n";
            sdcard.appendFile(SD, "/data.txt", data.c_str());

            // Serial.println(data);
        }
    }
}


void processCommand(String command) {

    int lIndex = command.indexOf('L'); // Find the index of 'L'

    if (lIndex != -1) {
        // String lStr = command.substring(lIndex+1);
        // int l = lStr.toInt(); 
        // lidar.begin(0, true);
        // lidar.takeMeasurement();
        // Serial.println(lidar.distance());
    }


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
    lidar.begin(0, true);
    hbridge.begin();
    sdcard.begin();
    servo.begin();
    BT.begin(deviceName);
    BT.setPin(pin);

    // stepper.setMicrosteps(8);
    // stepper.setSpeed(100);

    pinMode(ledPin,OUTPUT);
    
    scanLidar();
    

}

void loop(){
    
    // scanLidar();
    // stepper.step(1);
    // move servo
    // for (int i = 0; i < 180; i++){
    //     servo.setAngle(i);
    //     delay(10);
    // }
    // hbridge.move(80,80);
    // 
    // stepper.step(1);
    // Bluetooth();
    // digitalWrite(ledPin,HIGH);

}