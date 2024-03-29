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

#include <Arduino.h>
#include "Stepper.h"
#include "LIDARLite.h"
#include "HBridge.h"
#include "SDCard.h"
#include "ServoMotor.h"
#include "BluetoothSerial.h"
#include <esp_task_wdt.h>




Stepper stepper;
LIDARLite lidar;
HBridge hbridge;
SDCard sdcard;
ServoMotor servo;
BluetoothSerial BT;

String deviceName = "ESP32-RubbleScout";
const char *pin = "123456";
String incomingData = "";
bool commandStarted = false;
int ledPin = 2;

struct SphericalData {
    double distance;
    double theta;
    double phi;
};

// Déclaration des fonctions de tâche et de la queue
QueueHandle_t dataQueue;

// Handle (ou identifiant) pour MeasureTask
TaskHandle_t measureTaskHandle;


// Implémentation de la tâche de scan
void ScanTask(void *pvParameters) {
    esp_task_wdt_delete(NULL);
    stepper.setMicrosteps(8);
    stepper.setSpeed(100);
    const int thetaMin = 50;
    const int thetaMax = 110;
    const int thetaStep = 1; // Angle de pas pour le servo
    const double phiStep = stepper.getStepsAngle(); // Angle de pas pour le stepper

    int refreshRate = 650; // Taux de rafraîchissement en Hz
    const int64_t notificationInterval = 1000000 / refreshRate; // Intervalle en microsecondes
    int64_t lastNotificationTime = esp_timer_get_time();

    for (int thetaDeg = thetaMin; thetaDeg <= thetaMax; thetaDeg += thetaStep) {
        servo.setAngle(thetaDeg);

        for (double phiDeg = 0; phiDeg < 360; phiDeg += phiStep) {
            stepper.step();

            int64_t currentTime = esp_timer_get_time();
            if (currentTime - lastNotificationTime >= notificationInterval) {
                // Envoyer la notification
                xTaskNotifyGive(measureTaskHandle);
                lastNotificationTime = currentTime; // Mettre à jour le temps pour la dernière notification
            }
        }
    }
    vTaskDelete(NULL); // Supprimer la tâche si le scan est terminé
}

void MeasureTask(void *pvParameters) {
    SphericalData data; // Structure ou classe pour stocker les données sphériques
    int maxRange = 1000; // Portée maximale en cm

    for (;;) {
        
        if (ulTaskNotifyTake(pdTRUE, portMAX_DELAY)) {

            data.distance = lidar.distance(); // Lire la distance
            data.theta = servo.getCurrentAngle(); // Obtenir l'angle actuel du servo
            data.phi = stepper.getCurrentAngle(); // Obtenir l'angle actuel du stepper

            if (data.distance > 0 && data.distance < maxRange) {
                // Stocker la mesure dans la queue pour la tâche d'écriture
                xQueueSend(dataQueue, &data, portMAX_DELAY);
            }
        }
    }
}

// Implémentation de la tâche d'écriture
void WriteTask(void *pvParameters) {
    esp_task_wdt_delete(NULL);
    SphericalData data;
    double cartesian[3];
    double spherical[3];
    String line = "";
    sdcard.write("x, y, z\n");

    for (;;) {
        if (xQueueReceive(dataQueue, &data, portMAX_DELAY)) {
            spherical[0] = data.distance;
            spherical[1] = servo.degreeToRadian(data.theta);
            spherical[2] = servo.degreeToRadian(data.phi);
            servo.sphericalToCartesian(spherical, cartesian);
            line = String(cartesian[0]) + ", " + String(cartesian[1]) + ", " + String(cartesian[2]) + "\n";
            sdcard.appendFile(SD, "/data.txt", line.c_str());
        }
    }
}


void processCommand(String command) {

    int lIndex = command.indexOf('L'); // Find the index of 'L'

    if (lIndex != -1) {
        // Lidar
    }


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
        hbridge.move(pwmg,pwmd);
    }
}

void Bluetooth(){

    // Read data from the Bluetooth module
    while (BT.available()) {
        char incomingByte = BT.read(); 

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
    // FailSafe if connection is lost
    if (!BT.connected(1000)) {
        hbridge.move(0,0);
    }
}



void setup() {

    Serial.begin(115200);
    stepper.begin();
    lidar.begin(1, true);
    hbridge.begin();
    sdcard.begin();
    servo.begin();
    BT.begin(deviceName);
    BT.setPin(pin);

    // pinMode(ledPin,OUTPUT);

    dataQueue = xQueueCreate(10, sizeof(SphericalData)); // Ajustez la taille de la queue selon vos besoins

    

    // Dans setup() avant de créer les tâches
    esp_task_wdt_init(1000, true); // Définis le timeout du WDT à 60 secondes

    // Création de la tâche de scan
    xTaskCreatePinnedToCore(ScanTask, "ScanTask", 2048, NULL, 1, NULL, 0);

    xTaskCreatePinnedToCore(MeasureTask, "MeasureTask", 2048, NULL, 1, &measureTaskHandle, 0);

    xTaskCreatePinnedToCore(WriteTask, "WriteTask", 10000, NULL, 1, NULL, 1);
    }

void loop(){ 
}