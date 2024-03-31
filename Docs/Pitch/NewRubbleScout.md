# RubbleScout Project Overview

## Introduction
This document serves as a brief presentation of the RubbleScout robot project for review and assistance from the faculty.

## Student Name
- Lorenz CAZAUBON

## Robot Name
- RubbleScout

## Objective
RubbleScout is designed as a semi-autonomous robotic system aimed at aiding search and rescue operations through 3D environmental scanning and object detection in disaster-stricken areas.

## Technical Synopsis
RubbleScout is built on a tracked platform equipped with a suite of sensors including LiDAR for 3D scanning, ultrasonic for obstacle detection, and cameras for visual input. The core processing unit is an NVIDIA Jetson Nano, which handles data processing and autonomous decision-making, supported by an ESP32 microcontroller for managing sensor integration and actuation.

## State Machine Overview
RubbleScout's software operates on a state machine with states such as Initialization, Standby, Scanning, and Data Transmission. Transitions between states are managed based on sensor inputs and operational modes.

## Hardware & Software Architecture
The robot features a modular architecture allowing for scalability and maintenance. The hardware includes motor drivers, power management, and sensor modules, while the software architecture is designed for real-time processing and modular updates.

### Architecture
- The robot's architecture comprises three primary layers:
  - **Sensing Layer:** LiDAR, ultrasonic sensors, and cameras for environment perception.
  - **Processing Layer:** NVIDIA Jetson Nano for high-level processing and ESP32 for low-level control and sensor integration.
  - **Actuation Layer:** Electric motors for movement and a servo motor for LiDAR scanning.

- [Link to Wiring Diagram](https://github.com/Templatew/RubbleScout/blob/main/Code/Main/README.md)

### Code Overview
The software is developed using C++ on the ESP-IDF framework for real-time operations and Python on the Jetson Nano for data processing and machine learning tasks.

- [Link to Code Documentation](https://github.com/Templatew/RubbleScout/blob/main/Docs/Wiring/ESP32/Schematic_RubbleScout_2024-02-16.pdf)

## Usage of NVIDIA Jetson Nano
- The Jetson Nano serves as the brain of RubbleScout, responsible for processing sensor data, creating 3D maps of the environment, and executing autonomous navigation algorithms. Potential uses also include survivor detection via machine learning and integration with other IoT devices for expanded capabilities.

## Risk Assessment
Identified risks include system malfunctions, electrical failures, and sensor inaccuracies. Mitigation strategies involve redundant design, rigorous testing, and real-time system monitoring.

## Recent Progress
- Successfully conducted the first LiDAR scan with data stored on an SD card.
- Transitioned to ESP-IDF for improved performance.
- Implemented a new DC-DC converter to prevent power issues.

## Supporting Materials
- [Link to the Code Repository](https://github.com/Templatew/RubbleScout/tree/main/Code)
- [Link to the Weekly Reports](https://github.com/Templatew/RubbleScout/tree/main/Docs/Weekly%20Reports)
- [Link to the System Block Diagram](#)

## **Gallery**

https://github.com/Templatew/RubbleScout/assets/96289463/867a7651-68fa-45cb-8242-6cb173693c5a

https://github.com/Templatew/RubbleScout/assets/96289463/f9fa39b1-5d0c-4065-bb0d-41c5539a41e1

https://github.com/Templatew/RubbleScout/assets/96289463/a6dde0ae-bb52-4444-9256-39dd32141298

*This presentation is for academic review purposes*
