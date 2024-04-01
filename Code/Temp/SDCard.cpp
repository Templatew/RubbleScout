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

#include "SDCard.h"
#include <Arduino.h>
#include "FS.h"
#include "SD.h"
#include "SPI.h"

SDCard::SDCard(){}

void SDCard::begin(){
    if(!SD.begin()){
        // Serial.println("Card Mount Failed");
        return;
    }
    uint8_t cardType = SD.cardType();
    if(cardType == CARD_NONE){
        // Serial.println("No SD card attached");
        return;
    }
    // Serial.println("SD Card Type: " + String(cardType));
    uint64_t cardSize = SD.cardSize() / (1024 * 1024);
    // Serial.println("SD Card Size: " + String(cardSize) + "MB");
}

void SDCard::write(String data){
    File file = SD.open("/data.txt", FILE_WRITE);
    if(!file){
        // Serial.println("Failed to open file for writing");
        return;
    }
    if(file.print(data)){
        // Serial.println("File written");
    } else {
        // Serial.println("Write failed");
    }
    file.close();
}

void SDCard::read(String filename){
    File file = SD.open(filename);
    if(!file){
        // Serial.println("Failed to open file for reading");
        return;
    }
    // Serial.println("File Content:");
    while(file.available()){
        Serial.write(file.read());
    }
    file.close();
}

void SDCard::listDir(fs::FS &fs, const char * dirname, uint8_t levels){
    // Serial.printf("Listing directory: %s\n", dirname);

    File root = fs.open(dirname);
    if(!root){
        // Serial.println("Failed to open directory");
        return;
    }
    if(!root.isDirectory()){
        // Serial.println("Not a directory");
        return;
    }

    File file = root.openNextFile();
    while(file){
        if(file.isDirectory()){
            // Serial.print("  DIR : ");
            // Serial.println(file.name());
            if(levels){
                listDir(fs, file.name(), levels -1);
            }
        } else {
            // Serial.print("  FILE: ");
            // Serial.print(file.name());
            // Serial.print("  SIZE: ");
            // Serial.println(file.size());
        }
        file = root.openNextFile();
    }
}

void SDCard::createDir(fs::FS &fs, const char * path){
    // Serial.printf("Creating Dir: %s\n", path);
    if(fs.mkdir(path)){
        // Serial.println("Dir created");
    } else {
        // Serial.println("mkdir failed");
    }
}

void SDCard::removeDir(fs::FS &fs, const char * path){
    // Serial.printf("Removing Dir: %s\n", path);
    if(fs.rmdir(path)){
        // Serial.println("Dir removed");
    } else {
        // Serial.println("rmdir failed");
    }
}

void SDCard::readFile(fs::FS &fs, const char * path){
    // Serial.printf("Reading file: %s\n", path);

    File file = fs.open(path);
    if(!file){
        // Serial.println("Failed to open file for reading");
        return;
    }

    // Serial.print("Read from file: ");
    while(file.available()){
        Serial.write(file.read());
    }
    file.close();
}

void SDCard::writeFile(fs::FS &fs, const char * path, const char * message){
    // Serial.printf("Writing file: %s\n", path);

    File file = fs.open(path, FILE_WRITE);
    if(!file){
        // Serial.println("Failed to open file for writing");
        return;
    }
    if(file.print(message)){
        // Serial.println("File written");
    } else {
        // Serial.println("Write failed");
    }
    file.close();
}

void SDCard::appendFile(fs::FS &fs, const char * path, const char * message){
    // Serial.printf("Appending to file: %s\n", path);

    File file = fs.open(path, FILE_APPEND);
    if(!file){
        // Serial.println("Failed to open file for appending");
        return;
    }
    if(file.print(message)){
        // Serial.println("Message appended");
    } else {
        // Serial.println("Append failed");
    }
    file.close();
}

void SDCard::renameFile(fs::FS &fs, const char * path1, const char * path2){
    // Serial.printf("Renaming file %s to %s\n", path1, path2);
    if (fs.rename(path1, path2)) {
        // Serial.println("File renamed");
    } else {
        // Serial.println("Rename failed");
    }
}

void SDCard::deleteFile(fs::FS &fs, const char * path){
    // Serial.printf("Deleting file: %s\n", path);
    if(fs.remove(path)){
        // Serial.println("File deleted");
    } else {
        // Serial.println("Delete failed");
    }
}