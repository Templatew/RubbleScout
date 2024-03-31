# RubbleScout Project Code Documentation

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
