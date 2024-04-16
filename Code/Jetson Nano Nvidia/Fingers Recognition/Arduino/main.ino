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
#include <Wire.h>
// Write in binary the nummber on the leds
const int led_pin_1 = 3;
const int led_pin_2 = 4;
const int led_pin_3 = 5;

void setup() {
    Wire.begin(0x55);              // join i2c bus with address #4
    Wire.onReceive(receiveEvent);  // register event
    Serial.begin(9600);            // start serial for output
    pinMode(led_pin_1, OUTPUT);
    pinMode(led_pin_2, OUTPUT);
    pinMode(led_pin_3, OUTPUT);
}

void loop() {
    delay(100);
}

void receiveEvent(int howMany) {
    while (1 < Wire.available())  // loop through all but the last
    {
    char c = Wire.read();  // receive byte as a character
    Serial.print(c);       // print the character
    }
    int n = Wire.read();  // receive byte as an integer
    Serial.println(n);    // print the integer
    // Write the number in binary on the leds
    // n from 0 to 5
    if (n == 0) {
      digitalWrite(led_pin_1, LOW);
      digitalWrite(led_pin_2, LOW);
      digitalWrite(led_pin_3, LOW);
    } else if (n == 1) {
      digitalWrite(led_pin_1, HIGH);
      digitalWrite(led_pin_2, LOW);
      digitalWrite(led_pin_3, LOW);
    } else if (n == 2) {
      digitalWrite(led_pin_1, LOW);
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_3, LOW);
    } else if (n == 3) {
      digitalWrite(led_pin_1, HIGH);
      digitalWrite(led_pin_2, HIGH);
      digitalWrite(led_pin_3, LOW);
    } else if (n == 4) {
      digitalWrite(led_pin_1, LOW);
      digitalWrite(led_pin_2, LOW);
      digitalWrite(led_pin_3, HIGH);
    } else if (n == 5) {
      digitalWrite(led_pin_1, HIGH);
      digitalWrite(led_pin_2, LOW);
      digitalWrite(led_pin_3, HIGH);
    }
}