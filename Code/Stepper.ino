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

// Pins
const int STEP = 3;
const int DIR_STEPPER_MOTOR = 2;

// Variables
unsigned long nb_steps = 0; // Number of steps taken by the stepper motor
const int DELAY_STEPPER = 500 // ms between each step, if not working try 4ms
const int ANGLE_PER_STEP = 1.8 // Angle per step of the stepper motor

// Functions

// Function to setup the stepper motor
void setup_stepper_motor(){

    pinMode(STEPPER,OUTPUT);
    pinMode(DIR_STEPPER_MOTOR,OUTPUT);
}

// Function to move the stepper motor by one step
void move_stepper(){

    digitalWrite(STEP,HIGH);
    delay(DELAY_STEPPER);
    digitalWrite(STEP,LOW);
}

// Function to calibrate stepper motor
void calibrate_stepper(){

    while(!is_IR_triggered){
        // Move stepper motor
        move_stepper();
    }
}