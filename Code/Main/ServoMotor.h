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

#ifndef ServoMotor_h
#define ServoMotor_h

#include <Arduino.h>
#include <ESP32Servo.h>


class ServoMotor {

public:

  ServoMotor();
  void begin();
  void setAngle(int angle);
  void setPulseWidth(int pulseWidth);
  int getAngle();
  int getPulseWidth();
  double degreeToRadian(double degree);
  // double pulseWidthToAngle(int pulseWidth);
  // double angleToPulseWidth(double angle);
  void sphericalToCartesian(int spherical[3], int cartesian[3]);

private:

  static const int _SERVO_PIN = 27;

  static const int _MIN_PULSE_WIDTH = 1000;
  static const int _MAX_PULSE_WIDTH = 1600;
  static const int _MOY_PULSE_WIDTH = (_MIN_PULSE_WIDTH + _MAX_PULSE_WIDTH) / 2;
  static const int RANGE_PULSE_WIDTH = _MAX_PULSE_WIDTH - _MIN_PULSE_WIDTH;


  int _angle = 0;
  int _pulseWidth = 0;
  Servo _servo;
};

#endif