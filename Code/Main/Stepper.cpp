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
 * @file Stepper.cpp
 * @brief Implementation of the Stepper class
 * 
 * This file contains the implementation of the Stepper class, which provides control over a stepper motor.
 * 
 * @author Templatew
 * @date 02-2024
 * @version 1.0
 */

#include "Stepper.h"
#include <Arduino.h>

Stepper::Stepper(){}

void Stepper::begin(){
    pinMode(this->_STEP, OUTPUT);
    pinMode(this->_DIR, OUTPUT);
    pinMode(this->_MS1, OUTPUT);
    pinMode(this->_MS2, OUTPUT);
}

void Stepper::setSpeed(int speed){
    this->_delayStepperMotor = map(speed, 0, 100, (this->_MAX_DELAY*8)/this->_microsteps, (this->_MIN_DELAY * 8)/this->_microsteps);
}

void Stepper::setMicrosteps(int microsteps){
    // Set microsteps
    this->_microsteps = microsteps;
    switch(microsteps) {
        case 8:
            digitalWrite(this->_MS1, LOW);
            digitalWrite(this->_MS2, LOW);
            break;
        case 16:
            digitalWrite(this->_MS1, HIGH);
            digitalWrite(this->_MS2, HIGH);
            break;
        case 32:
            digitalWrite(this->_MS1, HIGH);
            digitalWrite(this->_MS2, LOW);
            break;
        case 64:
            digitalWrite(this->_MS1, LOW);
            digitalWrite(this->_MS2, HIGH);
            break;
        default:
        // Default to 16 microsteps
            digitalWrite(this->_MS1, HIGH);
            digitalWrite(this->_MS2, HIGH);
            break;
    }
    this->_stepsAngle = this->_STEP_ANGLE_DEFAULT / this->_microsteps;
    this->_stepsPerRev = 360 / this->_stepsAngle;
}

void Stepper::step(int steps){
    if (steps > 0){
        digitalWrite(this->_DIR, HIGH);
    } else {
        digitalWrite(this->_DIR, LOW);
    }
    for (int i = 0; i < abs(steps); i++){
        digitalWrite(this->_STEP, HIGH);
        delayMicroseconds(this->_delayStepperMotor);
        digitalWrite(this->_STEP, LOW);
        delayMicroseconds(this->_delayStepperMotor);
    }
}

int Stepper::getMicrosteps(){
    return this->_microsteps;
}

int Stepper::getStepsAngle(){
    return this->_stepsAngle;
}

int Stepper::getStepsPerRev(){
    return this->_stepsPerRev;
}

