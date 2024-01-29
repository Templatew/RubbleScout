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

#include <Wire.h>
#include <LIDARLite.h>
#include <cmath>

LIDARLite myLidarLite;

// Functions

// Function to setup the LIDAR
void setup_lidar(){
    myLidarLite.begin(0, true); // Set configuration to default and I2C to 400 kHz
}

// Function to get the distance from the LIDAR
unsigned long int get_distance_lidar(){
    unsigned long int distance = myLidarLite.distance();
    return distance;
}

// Function to convert microseconds to degrees
double microseconds_to_degrees(int microseconds) {
    
    const int RANGE_MICROSECONDS = ANGLE_MAX - ANGLE_MIN;

    const double MIN_DEGREES = -90.0;
    const double MAX_DEGREES = 90.0;

    const double RANGE_DEGREES = MAX_DEGREES - MIN_DEGREES;

    double degrees = ((microseconds - ANGLE_MIN) * RANGE_DEGREES / RANGE_MICROSECONDS) + MIN_DEGREES;

    return degrees;
}

// Function to convert degrees to radians
double degrees_to_radians(double degrees) {
    return degrees * PI / 180.0;
}

// Function to convert microseconds to radians
double microseconds_to_radians(int microseconds) {
    return degrees_to_radians(microseconds_to_degrees(microseconds));
}

// Function 
std::array<double, 3> spherical_to_cartesian(double r, double theta, double phi) {

    // Convert angles to radians
    double thetaRad = microseconds_to_radians(theta);
    double phiRad = degrees_to_radians(phi);

    // Calculate x, y, z
    double x = r * sin(thetaRad) * cos(phiRad);
    double y = r * sin(thetaRad) * sin(phiRad);
    double z = r * cos(thetaRad);

    // Return array
    return {x, y, z};
}

// Function to scan the area
void scan(){
    
    calibrate_stepper();

    unsigned long int distance = 0; // Distance in cm
    double phi = 0; // Angle in degrees
    int theta = 0; // Angle in microseconds
    int steps_to_make_a_full_turn = (360 / ANGLE_PER_STEP); // Number of steps to make a full turn
    
    // Cartesian coordinates
    double x = 0; 
    double y = 0; 
    double z = 0;
    std::array<double, 3> cartesian = {0, 0, 0};

    for (int i = ANGLE_MIN; i < ANGLE_MAX; i++){

        theta = i;

        //move servo
        move_servo_to(i);
        
        for (int j = 0; j < steps_to_make_a_full_turn; j++){

            distance = get_distance_lidar();
            phi = j * ANGLE_PER_STEP;

            cartesian = spherical_to_cartesian(distance, theta, phi);
            x = cartesian[0];
            y = cartesian[1];
            z = cartesian[2];

            Serial.print(x);
            Serial.print(",");
            Serial.print(y);
            Serial.print(",");
            Serial.println(z);

            move_stepper();
        }
    }
}

