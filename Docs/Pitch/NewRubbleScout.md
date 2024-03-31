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

- [Link to Wiring Diagram](RubbleScout/Code/Main/README.md)
- [Link to Code Documentation](Templatew/RubbleScout/Code/Main/README.md)

## Usage of NVIDIA Jetson Nano
The Jetson Nano is employed to process sensor data, implement machine learning algorithms for object recognition, and generate 3D maps that can be used for navigation and strategy planning in rescue missions.

- [Link to Jetson Nano Utilization Details](Templatew/RubbleScout/Code/Main/README.md)

## Risk Assessment
Identified risks include system malfunctions, electrical failures, and sensor inaccuracies. Mitigation strategies involve redundant design, rigorous testing, and real-time system monitoring.

## Recent Progress
- Successfully conducted the first LiDAR scan with data stored on an SD card.
- Transitioned to ESP-IDF for improved performance.
- Implemented a new DC-DC converter to prevent power issues.

## Supporting Materials
- [Link to the Code Repository](Templatew/RubbleScout/Code)
- [Link to the System Block Diagram](#)0

*This presentation is for academic review purposes*
