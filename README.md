## Serial Speed Monitor with EEPROM
This Arduino program demonstrates a simple Serial Speed Monitor with EEPROM storage. It receives text characters from the serial monitor, calculates the speed of data transmission in bits per second, and then displays this speed on the serial monitor. It also stores the received text in the EEPROM and sends it back to the PC.

### Prerequisites:
- Arduino IDE installed
- Arduino board (such as Arduino Uno)

### Installation:
1. Download the Serial_Speed_Monitor_with_EEPROM.ino file.
2. Open the file in Arduino IDE.
3. Connect your Arduino board to your computer.
4. Select the appropriate board and port from the Arduino IDE.
5. Upload the sketch to your Arduino board.

### Usage:
1. Open the Serial Monitor in the Arduino IDE (Tools -> Serial Monitor).
2. Set the baud rate to 2400 (or as defined in the BAUD_RATE constant).
3. Type text in the Serial Monitor. The program will calculate the speed of data transmission and display it.
4. The program will store the received text in the EEPROM and send it back to the PC after every interval.

### Note:
- This program assumes 8 bits per character for speed calculation.
- Modify the interval variable for changing the update speed interval.
Circuit
- No external circuit is needed for this program. It works with the Arduino board connected to a computer via USB.

### Resources
- Arduino EEPROM Library
- Arduino Serial Communication

### License
This project is licensed under the MIT License - see the LICENSE file for details.
