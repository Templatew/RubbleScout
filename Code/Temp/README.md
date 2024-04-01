### ESP32 Project Usage Guide

#### Setting Up the Development Environment

1. **Arduino IDE Installation:**

   - Ensure the Arduino IDE is installed on your computer. If not, download it from the official [Arduino website](https://www.arduino.cc/en/software) and follow the installation instructions.
2. **Adding ESP32 Support:**

   - Open the Arduino IDE, go to `File` > `Preferences`.
   - In the dialog box, find the "Additional Board Manager URLs" field and add the following URL:
     ```
     https://dl.espressif.com/dl/package_esp32_index.json
     ```
   - Click "OK".
3. **Installing ESP32 in Board Manager:**

   - Go to `Tools` > `Board` > `Boards Manager...`.
   - Search for "ESP32" and install "ESP32 by Espressif Systems".
4. **Selecting the ESP32 Module:**

   - Under `Tools` > `Board`, select "ESP32 Dev Module" or the specific module you are using.

#### Installing Required Libraries

1. **Servo Library for ESP32:**

   - ESP32 requires a specific Servo library to properly handle servomotors.
   - Go to `Sketch` > `Include Library` > `Manage Libraries...`.
   - Search for "ESP32Servo" and install the library.
2. **Bluetooth Communication Library (if needed):**

   - ESP32 supports both classic Bluetooth and BLE (Bluetooth Low Energy). The standard "BluetoothSerial" library is commonly used for classic Bluetooth and is included by default with the ESP32 in the Arduino IDE.
3. **SD Card Library (if needed):**

   - To utilize the ESP32's SD card functionality, you can use the built-in SD library in the Arduino IDE or other ESP32-specific libraries as needed.

#### Development and Uploading

- **Writing the Code:** Write your code in the Arduino IDE, utilizing ESP32-specific functions for servomotors, Bluetooth communication, and SD card functionality as shown in your functions.
- **Uploading to the ESP32:** Connect your ESP32 to the computer via USB, select the correct serial port under `Tools` > `Port`, and click the "Upload" button to send your code to the ESP32.

#### Troubleshooting**ection Issues:** If you encounter issues connecting the ESP32 to the Arduino IDE, ensure the correct USB driver is installed for your ESP32 module.

- **Pin Usage:** Make sure to adhere to the ESP32 pin specifications, especially for special functionalities like SPI, I2C, UART, etc.

#### Final Notes

- **Power Supply:** Ensure the ESP32 is properly powered, especially when connecting peripherals like servomotors or SD modules that may require additional current.
- **Documentation:** For specific functionalities or advanced configurations, always refer to the official ESP32 documentation and the libraries you are using.


# **How does it work**

## RubbleScout Project Ino Code Documentation

## Overview
The RubbleScout robot's software stack is composed of several modular components designed to interact seamlessly to enable the robot to perform 3D scanning and navigation tasks. The code is written in C++ and organized into classes, each responsible for handling a specific aspect of the robot's functionality.

## Classes and Their Functions

### LIDARLite
- **Purpose:** Manages interactions with the Garmin LIDAR-Lite sensor, handling the initialization, configuration, and data acquisition process.
- **Methods:**
  - `begin()`: Initializes the sensor and sets I2C communication.
  - `configure()`: Sets various operational modes for the LIDAR sensor.
  - `distance()`: Triggers a distance measurement and retrieves the result.
  - `write()`: Writes data to a specified register in the LIDAR sensor.
  - `read()`: Reads data from the LIDAR sensor's registers.
  - `reset()`: Resets the LIDAR sensor to its default state.
  - `correlationRecordToSerial()`: Outputs the correlation record to the serial port for debugging.

### HBridge
- **Purpose:** Controls the H-Bridge that drives the robot's motors, allowing for directional and speed adjustments.
- **Methods:**
  - `begin()`: Sets up the required pins for motor control.
  - `move()`: Drives the motors at specified speeds for the left and right motors.

### ServoMotor
- **Purpose:** Provides an interface to control a servo motor, which is used to adjust the LiDAR sensor's orientation.
- **Methods:**
  - `begin()`: Attaches the servo motor to its control pin.
  - `setAngle()`: Moves the servo motor to a desired angle.
  - `getCurrentAngle()`: Retrieves the current angle of the servo motor.
  - `sphericalToCartesian()`: Converts spherical coordinates to Cartesian coordinates.

### SDCard
- **Purpose:** Manages reading from and writing to the SD card, which stores the scan data.
- **Methods:**
  - `begin()`: Initializes the SD card module.
  - `write()`: Writes data to a specified file on the SD card.
  - `read()`: Reads data from a file on the SD card.
  - `listDir()`: Lists the contents of a directory on the SD card.
  - `createDir()`: Creates a directory on the SD card.
  - `removeDir()`: Removes a directory from the SD card.
  - `deleteFile()`: Deletes a file on the SD card.

### Stepper
- **Purpose:** Controls the stepper motor, which can be used for precise positioning tasks.
- **Methods:**
  - `begin()`: Initializes the stepper motor.
  - `step()`: Advances the stepper motor by one step.
  - `setSpeed()`: Sets the speed of the stepper motor.
  - `setMicrosteps()`: Configures the microstepping mode for finer control.
  - `getMicrosteps()`: Retrieves the current microstep setting.
  - `getCurrentAngle()`: Calculates the current angle of the stepper motor based on steps taken.

## Main Code (`Main.ino`)
The `Main.ino` file is the entry point of the robot's firmware. It orchestrates the setup and loop cycles where the components are initialized and used to perform the scanning operations.

## Usage
1. The `LIDARLite` class is used to interface with the LiDAR sensor for distance measurements.
2. The `HBridge` class is responsible for motor control, dictating the movement and direction of RubbleScout.
3. The `ServoMotor` class manipulates the servo to orient the LiDAR sensor for scanning different elevations.
4. The `SDCard` class manages data logging, allowing scan results to be saved for further analysis.
5. The `Stepper` class precisely controls the stepper motor, used here for incremental turns of the LiDAR sensor for a 360-degree scan.
6. In the `Main.ino` file, these classes are instantiated, and their methods are called as per the required functionality in the robot's operation loop.

# Main Operation (`Main.ino`)

When the RubbleScout firmware is executed, the system initiates a 3D scanning sequence. This process involves the following steps:

1. **Initialization:**
   - The LiDAR, servo, stepper motor, and SD card modules are initialized using their respective `begin()` methods.
   - The robot enters a ready state, waiting for a command to start the scanning process.

2. **3D Scanning:**
   - Upon receiving the scan command, the LiDAR sensor, controlled by the `LIDARLite` class, begins collecting distance measurements.
   - The `ServoMotor` and `Stepper` classes adjust the LiDAR sensor's orientation to scan the environment systematically, covering a predefined range of angles and elevations.
   - Distance measurements are stored in memory with their corresponding angular positions.

3. **Data Saving:**
   - Once the scan is complete, the gathered data, now representing a point cloud of the scanned environment, is formatted and saved to an SD card via the `SDCard` class.
   - The data is stored in a simple text format, which can later be processed on a computer.

4. **Post-Scan Processing:**
   - After the scan, the robot can be switched to other modes, or the SD card can be removed for data processing.
   - The saved scan data can be transferred to a computer and processed with 3D visualization tools like Autodesk Recap to generate a 3D model of the environment.

## Reflections

This automated 3D scanning process is integral to RubbleScout's mission of aiding in search and rescue operations. By saving the scan data for later processing, the robot provides valuable information for planning and executing rescue missions, allowing for the assessment of environments that are challenging or dangerous for humans to navigate.

The scan data, once processed into a 3D model, offers a visual representation of the scanned area, which is crucial for strategic planning and response by rescue teams. It ensures that the responders have a clear understanding of the terrain and any potential obstacles before they enter a hazardous zone.
