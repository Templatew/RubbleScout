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


// This fonction will receive the data from the lidar and save it in a file
// It needs to convert degrees to radians
// Then spherical to cartesian
// Then save the data in a file
void lidarTask(void *pvParameters) {
    
    
    Serial.println(lidar.distance());
    vTaskDelete(NULL); // Delete the task when finished scanning

}


void scanLidar(){
    
    stepper.setMicrosteps(8);
    stepper.setSpeed(100);
    
    double phiDeg = 0;
    int thetaMin = 60;
    int thetaMax = 110;
    int thetaDeg = thetaMin;
    double theta = 0;
    double phi = 0;

    int steps = 0;
    int stepsPerRev = stepper.getStepsPerRev();
    double stepsAngle = stepper.getStepsAngle();


    double cartesian[3];
    double spherical[3];
    String data = "";
    sdcard.write("x, y, z\n");

    int distance = 0;
    int refreshRate = 10; // 100 Hz max in normal or ~650 Hz max in high performance mode
    double deltaT = 1000 / refreshRate;
    unsigned long timer = millis();

    servo.setAngle(thetaDeg);

    while(thetaDeg<=thetaMax){

        stepper.step(1);
        steps++;

        if (steps >= stepsPerRev){
            steps = 0;
            thetaDeg+=2;
            servo.setAngle(thetaDeg);
        }
        unsigned long currentTime = millis();
        if (currentTime - timer >= deltaT){
            
            xTaskCreatePinnedToCore(
                lidarTask,   // Task function
                "ScanLidar",     // Name of the task
                10000,           // Stack size (adjust as needed)
                NULL,            // Task input parameter
                1,               // Priority of the task
                NULL,            // Task handle
                0                // Core where the task should run
            );
            // distance = lidar.distance();
            // Serial.println(distance);

            // if (distance < 1000){
            //     phiDeg = steps * stepsAngle;
            //     theta = servo.degreeToRadian(thetaDeg);
            //     phi = servo.degreeToRadian(phiDeg);

            //     spherical[0] = distance;
            //     spherical[1] = theta;
            //     spherical[2] = phi;

            //     // Serial.println(String(spherical[0]) + ", " + String(spherical[1]) + ", " + String(spherical[2]) + "\n");

            //     servo.sphericalToCartesian(spherical, cartesian);

            //     data = String(cartesian[0]) + ", " + String(cartesian[1]) + ", " + String(cartesian[2]) + "\n";
            //     // Serial.println(data);
                
            //     sdcard.appendFile(SD, "/data.txt", data.c_str());
            // }
                
            timer = millis();
        }
    }
}


void processCommand(String command) {

    int lIndex = command.indexOf('L'); // Find the index of 'L'

    if (lIndex != -1) {
        // Lidar
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
    lidar.begin(2, true);
    hbridge.begin();
    sdcard.begin();
    servo.begin();
    BT.begin(deviceName);
    BT.setPin(pin);

    pinMode(ledPin,OUTPUT);

    // scanLidar();
}

void loop(){
    
    scanLidar();
    

}