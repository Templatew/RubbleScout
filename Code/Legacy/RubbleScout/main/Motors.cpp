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

#include <Arduino.h>
#include "Motors.h"

Motors::Motors() {

    // Set pins as outputs
    pinMode(DIR1, OUTPUT);
    pinMode(DIR2, OUTPUT);

    // Force stop
    digitalWrite(DIR1, LOW);
    digitalWrite(DIR2, LOW);

}

void move(int speed_left, int speed_right) {

    // Set right motor direction based on speed
    if (speed_right < 0) {
        digitalWrite(DIR1, HIGH);
    } 
    else {
        digitalWrite(DIR1, LOW);
    }

    // Set left motor direction based on speed
    if (speed_left < 0) {
        digitalWrite(DIR2, HIGH);
    } 
    else {
        digitalWrite(DIR2, LOW);
    }

    // Set motor speeds
    analogWrite(PW1, abs(speed_right));
    analogWrite(PW2, abs(speed_left));

}
