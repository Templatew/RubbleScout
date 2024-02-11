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
 * @file MotorsDemo.ino
 * @brief Short Demo To Control The Chassis on an ESP32.
 * 
 * @author Templatew
 * @date 02-2024
 * @version 1.0
 */

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// BLuetooth
#include "BluetoothSerial.h"
#define USE_PIN
const char *pin = "1234"; // Change this to more secure PIN.

String device_name = "ESP32-BT-Slave";

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

#if !defined(CONFIG_BT_SPP_ENABLED)
#error Serial Bluetooth not available or not enabled. It is only available for the ESP32 chip.
#endif

BluetoothSerial SerialBT;

String incomingData = ""; 
bool commandStarted = false; 

void processCommand(String command) {
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
    move(pwmg,pwmd);
    // Serial.print(pwmg);
    // Serial.print("  ");
    // Serial.println(pwmd);
  }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// H-Bridge

#define DIR1 21  // Remplace par le pin GPIO pour la direction du moteur droit
#define DIR2 18 // Remplace par le pin GPIO pour la direction du moteur gauche
#define PW1 19  // Remplace par le pin GPIO pour la vitesse du moteur droit
#define PW2 5  // Remplace par le pin GPIO pour la vitesse du moteur gauche

#define LEDC_CHANNEL_0 0
#define LEDC_CHANNEL_1 1
#define LEDC_TIMER_8_BIT 8
#define LEDC_BASE_FREQ 5000

void move(int speedLeft, int speedRight) {
  // Set the direction of the motors 
  if (speedRight < 0) {
    digitalWrite(DIR1, HIGH);
  } 
  else {
    digitalWrite(DIR1, LOW);
  }

  if (speedLeft < 0) {
    digitalWrite(DIR2, HIGH);
  } 
  else {
    digitalWrite(DIR2, LOW);
  }

  ledcWrite(LEDC_CHANNEL_0, abs(speedRight));
  ledcWrite(LEDC_CHANNEL_1, abs(speedLeft));
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void setup() {
  Serial.begin(115200);

  // Bluetooth
  SerialBT.begin(device_name); //Bluetooth device name
  Serial.printf("The device with name \"%s\" is started.\nNow you can pair it with Bluetooth!\n", device_name.c_str());
  #ifdef USE_PIN
    SerialBT.setPin(pin);
    Serial.println("Using PIN");
  #endif

  // H-Bridge
  pinMode(DIR1, OUTPUT);
  pinMode(DIR2, OUTPUT);

  // PWM Setup
  ledcSetup(LEDC_CHANNEL_0, LEDC_BASE_FREQ, LEDC_TIMER_8_BIT);
  ledcSetup(LEDC_CHANNEL_1, LEDC_BASE_FREQ, LEDC_TIMER_8_BIT);
  // Attach the channel to the GPIO to be controlled
  ledcAttachPin(PW1, LEDC_CHANNEL_0);
  ledcAttachPin(PW2, LEDC_CHANNEL_1);
}

void loop() {
  // if (Serial.available()) {
  //   SerialBT.write(Serial.read());
  // }
  // if (SerialBT.available()) {
  //   Serial.write(SerialBT.read());
  // }
  // Read data from the Bluetooth module
  while (SerialBT.available()) {
    char incomingByte = SerialBT.read(); 

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
  
}
