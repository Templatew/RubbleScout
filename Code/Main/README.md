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

#### Troubleshooting

- **Connection Issues:** If you encounter issues connecting the ESP32 to the Arduino IDE, ensure the correct USB driver is installed for your ESP32 module.
- **Pin Usage:** Make sure to adhere to the ESP32 pin specifications, especially for special functionalities like SPI, I2C, UART, etc.

#### Final Notes

- **Power Supply:** Ensure the ESP32 is properly powered, especially when connecting peripherals like servomotors or SD modules that may require additional current.
- **Documentation:** For specific functionalities or advanced configurations, always refer to the official ESP32 documentation and the libraries you are using.
