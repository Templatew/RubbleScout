#define DIR1 7
#define PW1 6
#define DIR2 4
#define PW2 5

#include<SoftwareSerial.h>
#define RX 9
#define TX 8
SoftwareSerial BlueT(RX,TX);

String incomingData = ""; // Stocke la commande entrante
bool commandStarted = false; // Indique si le début d'une commande a été détecté

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

void processCommand(String command) {
  int xIndex = command.indexOf('X'); // Trouve l'index de 'A'
  int yIndex = command.indexOf('Y'); // Trouve l'index de 'R'
  // Serial.println(command);
  if (xIndex != -1 && yIndex != -1) {
    // Extrait l'angle et la magnitude de la commande
    String xStr = command.substring(xIndex+1, yIndex);
    String yStr = command.substring(yIndex+1);

    int x = xStr.toInt(); // Convertit l'angle en entier
    int y = yStr.toInt(); // Convertit la magnitude en entier
    int pwmg;
    int pwmd;
    
    y = -y;
    pwmg = y + x;
    pwmd = y - x;
    if(pwmg > 255){
      pwmg = 255;
    }
    if(pwmg < -255){
      pwmg = -255;
    }
    if(pwmd > 255){
      pwmd = 255;
    }
    if(pwmd < -255){
      pwmd = -255;
    }
    // pwmg = map(pwmg,-510,510,-255,255);
    // pwmd = map(pwmd,-510,510,-255,255);



    
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
  while (BlueT.available()) {
    char incomingByte = BlueT.read(); // Lit le prochain caractère

    if (incomingByte == '{') {
      commandStarted = true; // Marque le début d'une commande
      incomingData = ""; // Réinitialise la chaîne pour la nouvelle commande
    } else if (incomingByte == '}' && commandStarted) {
      commandStarted = false; // Marque la fin de la commande
      processCommand(incomingData); // Traite la commande
    } else if (commandStarted) {
      incomingData += incomingByte; // Ajoute le caractère à la commande
    }
  }
}


