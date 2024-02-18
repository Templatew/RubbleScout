#define DIR1 7
#define PW1 6
#define DIR2 4
#define PW2 5

int speed_left = 0;
int speed_right = 0;


#include<SoftwareSerial.h>
#define RX 11
#define TX 10
SoftwareSerial BlueT(RX,TX);
char Data;

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
  if (BlueT.available()){
    Data=BlueT.read();
    if (Data=='F') {
      move(255, 255);
    }
    else if (Data=='B') {
      move(-255, -255);
    }
    else if (Data=='L') {
      move(-255, 255);
    }
    else if (Data=='R') {
      move(255, -255);
    }
    else if (Data=='S') {
      move(0, 0);
    }
  }
}

