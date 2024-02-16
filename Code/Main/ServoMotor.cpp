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
#include "ServoMotor.h"
#include <ESP32Servo.h>

ServoMotor::ServoMotor(){}

void ServoMotor::begin(){
    this->_servo.setPeriodHertz(50);
    this->_servo.attach(this->_SERVO_PIN);
}

void ServoMotor::setAngle(int angle){
    this->_angle = angle - this->_SERVO_OFFSET_DEG;
    this->_servo.write(this->_angle);
}

void ServoMotor::setPulseWidth(int pulseWidth){
    this->_pulseWidth = pulseWidth;
    this->_angle = map(this->_pulseWidth, this->_MIN_PULSE_WIDTH, this->_MAX_PULSE_WIDTH, 0, 180);
    this->_servo.write(this->_pulseWidth);
}

int ServoMotor::getAngle(){
    return this->_angle;
}

int ServoMotor::getPulseWidth(){
    return this->_pulseWidth;
}

double ServoMotor::degreeToRadian(double degree){
    return degree * PI / 180;
}

// double ServoMotor::pulseWidthToAngle(int pulseWidth){
//     return map(pulseWidth, 500, 2500, 0, 180);
// }

// double ServoMotor::angleToPulseWidth(double angle){
//     return map(angle, 0, 180, 500, 2500);
// }

void ServoMotor::sphericalToCartesian(double spherical[3], double cartesian[3]){
    cartesian[0] = spherical[0] * sin(spherical[1]) * cos(spherical[2]);
    cartesian[1] = spherical[0] * sin(spherical[1]) * sin(spherical[2]);
    cartesian[2] = spherical[0] * cos(spherical[1]);
}

