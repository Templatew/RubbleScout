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
    Date : 01-2024
*/

#include "Lidar.h"
#include "ServoMotor.h"
#include "Stepper.h"
#include "IrSensor.h"
#include <Arduino.h>
#include <Wire.h>
#include <LIDARLite.h>

Lidar::Lidar(ServoMotor& servo_motor, Stepper& stepper, IrSensor& ir_sensor)
    : _servo_motor(servo_motor), _stepper(stepper), _ir_sensor(ir_sensor) {
    _Lidar.begin(0, true); // Set configuration to default and I2C to 400 kHz
    
    _servo_motor = servo_motor;
    _stepper = stepper;
    _ir_sensor = ir_sensor;

    _servo_motor.move_servo_to(1500);

}

double Lidar::get_distance_lidar(){
    double output = _Lidar.distance();
    return output;
}

void Lidar::calibrate_stepper_motor(){
    
    while(_ir_sensor.is_Ir_triggered()){
        _stepper.move_stepper_motor();
    }

}

// Function to convert microseconds to degrees
double Lidar::microseconds_to_degrees(int microseconds){
    return ((microseconds - _servo_motor.ANGLE_MIN) * _servo_motor.RANGE_DEGREES / _servo_motor.RANGE_MICROSECONDS) + _servo_motor.ANGLE_MIN_DEGREES;
}

// Function to convert degrees to radians
double Lidar::degrees_to_radians(double degrees) {
    return degrees * PI / 180.0;
}

// Function to convert microseconds to radians
double Lidar::microseconds_to_radians(int microseconds) {
    return degrees_to_radians(microseconds_to_degrees(microseconds));
}

// Function 
void Lidar::spherical_to_cartesian(double r, double theta, double phi) {

    // Convert angles to radians
    double thetaRad = microseconds_to_radians(theta);
    double phiRad = degrees_to_radians(phi);

    // Calculate x, y, z
    double x = r * sin(thetaRad) * cos(phiRad);
    double y = r * sin(thetaRad) * sin(phiRad);
    double z = r * cos(thetaRad);

    cartesians[0]=x;
    cartesians[1]=y;
    cartesians[2]=z;
}

void Lidar::scan(){

    
    calibrate_stepper_motor();

    double distance; // Distance in cm
    double phi = 0; // Angle in degrees
    int theta = 0; // Angle in microseconds
    int steps_to_make_a_full_turn = (360 / _stepper.ANGLE_PER_STEP); // Number of steps to make a full turn
    
    for (int i = _servo_motor.ANGLE_MIN; i < _servo_motor.ANGLE_MAX; i++){

        theta = i;

        //move servo
        _servo_motor.move_servo_to(i);
        
        for (int j = 0; j < steps_to_make_a_full_turn; j++){

            distance = get_distance_lidar();
            phi = j * _stepper.ANGLE_PER_STEP;

            spherical_to_cartesian(distance, theta, phi);
            double x = cartesians[0];
            double y = cartesians[1];
            double z = cartesians[2];
            // Send data to the computer

            _stepper.move_stepper_motor();
        }
    }

}




