# RubbleScout Project Presentation

## Student Name
- Lorenz Cazaubon

## Robot Name
- RubbleScout

## Objective of the Robot
- The primary objective of RubbleScout is to provide a semi-autonomous robotic solution for search and rescue operations within disaster-struck environments. RubbleScout is designed to navigate through rubble and challenging terrains, identify survivors, and provide real-time data to rescue teams, thereby enhancing the safety and efficiency of rescue missions.

## Technical Elements
### System Synopsis
- RubbleScout is built on a robust tracked platform, allowing for stable movement across varied terrains. The core of the system is the ESP32 microcontroller for control and the NVIDIA Jetson Nano for advanced processing tasks such as sensor data analysis and autonomous decision-making.

### State Machine
- The robot operates in several states:
  - **Idle:** Waiting for commands.
  - **Manual Control:** Direct control through user input.
  - **Auto Navigation:** Autonomous movement and obstacle avoidance. *(Not ready yet)*
  - **Scan Mode:** LiDAR-based 3D environment mapping.
  - **Data Transmission:** Sending collected data to the base station.
  
### Architecture
- The robot's architecture comprises three primary layers:
  - **Sensing Layer:** LiDAR, ultrasonic sensors, and cameras for environment perception.
  - **Processing Layer:** NVIDIA Jetson Nano for high-level processing and ESP32 for low-level control and sensor integration.
  - **Actuation Layer:** Electric motors for movement and a servo motor for LiDAR scanning.

### Code Overview
- The software is developed using C++ on the ESP-IDF framework for real-time operations and Python on the Jetson Nano for data processing and machine learning tasks.
More about the code [here](https://github.com/Templatew/RubbleScout/tree/main/Code)

## Usage of NVIDIA Jetson Nano
- The Jetson Nano serves as the brain of RubbleScout, responsible for processing sensor data, creating 3D maps of the environment, and executing autonomous navigation algorithms. Potential uses also include survivor detection via machine learning and integration with other IoT devices for expanded capabilities.


## **Gallery**

https://github.com/Templatew/RubbleScout/assets/96289463/867a7651-68fa-45cb-8242-6cb173693c5a



https://github.com/Templatew/RubbleScout/assets/96289463/f9fa39b1-5d0c-4065-bb0d-41c5539a41e1


https://github.com/Templatew/RubbleScout/assets/96289463/a6dde0ae-bb52-4444-9256-39dd32141298


