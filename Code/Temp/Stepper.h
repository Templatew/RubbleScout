
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
 * @file Stepper.h
 * @brief Header file for the Stepper class.
 * 
 * This file contains the declaration of the Stepper class, which provides
 * methods for controlling a stepper motor.
 * 
 * @author Templatew
 * @date 02-2024
 * @version 1.0
 */

#ifndef STEPPER_H
#define STEPPER_H
#include <Arduino.h>


class Stepper{

    public:

        Stepper();
        void begin();
        void step();
        void setSpeed(int speed);
        void setMicrosteps(int microsteps);
        int getMicrosteps();
        double getStepsAngle();
        int getStepsPerRev();
        double getCurrentAngle();

    private:

        static const int _STEP = 33;
        static const int _DIR = 32;
        static const int _MS1 = 26;
        static const int _MS2 = 25;
        
        
        static const int _MIN_DELAY = 200; // Minimum delay between steps in microseconds (very max 170)
        static const int _MAX_DELAY = 2000; // Maximum delay between steps in microseconds
        
        const double _STEP_ANGLE_DEFAULT = 1.8; // Number of degrees per step in default mode
        int _microsteps = 8; // Number of microsteps per step
        double _stepsAngle = _STEP_ANGLE_DEFAULT / _microsteps; // Number of degrees per step
        int _stepsPerRev = 360 / _stepsAngle; // Number of steps per revolution
        int _delayStepperMotor = _MIN_DELAY + _MAX_DELAY / 2; // Delay between steps in microseconds
        int _currentStep = 0; // Current step
};

#endif

