// Define pin numbers for motor control
#define DIR1 7
#define PW1 6
#define DIR2 4
#define PW2 5

#include<SoftwareSerial.h>
#define RX 9
#define TX 8
SoftwareSerial BlueT(RX,TX);

String incomingData = ""; 
bool commandStarted = false; 

/**
 * Move the robot by controlling the motor speeds.
 * @param speed_left The speed of the left motor (-255 to 255).
 * @param speed_right The speed of the right motor (-255 to 255).
 */
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

/**
 * Constrain a value between a minimum and maximum range.
 * @param value The value to constrain.
 * @param min The minimum value.
 * @param max The maximum value.
 * @return The constrained value.
 */
int constrain(int value, int min, int max) {
  if (value < min) {
    return min;
  }
  if (value > max) {
    return max;
  }
  return value;
}

/**
 * Process a command received from the Bluetooth module.
 * The command should be in the format "{X<value>Y<value>}".
 * The X value represents the forward/backward movement, and the Y value represents the left/right movement.
 * @param command The command string to process.
 */
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
    
    pwmg = constrain(-y+x, -255, 255);
    pwmd = constrain(-y-x, -255, 255);
    move(pwmg,pwmd);
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(DIR1,OUTPUT);
  pinMode(DIR2,OUTPUT);
  // pinMode(PW1,OUTPUT);
  // pinMode(PW2,OUTPUT);
  digitalWrite(DIR1,LOW);
  digitalWrite(DIR2,LOW);

  //BT
  BlueT.begin(9600);

}

void loop(){

  // Read data from the Bluetooth module
  while (BlueT.available()) {
    char incomingByte = BlueT.read(); 

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
