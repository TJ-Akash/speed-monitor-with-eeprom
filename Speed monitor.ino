#include <EEPROM.h>

#define BAUD_RATE 2400
#define EEPROM_SIZE 1024

unsigned long previousMillis = 0;
unsigned long interval = 1000;  
unsigned long totalBitsReceived = 0;

void setup() {
  Serial.begin(BAUD_RATE);
}

void loop() {
  unsigned long currentMillis = millis();

 
  while (Serial.available()) {
    char receivedChar = Serial.read();
    EEPROM.write(totalBitsReceived, receivedChar);  
    totalBitsReceived += 8; 
  }

  
  if (currentMillis - previousMillis >= interval && totalBitsReceived > 0) {
    float secondsPassed = (float)(currentMillis - previousMillis) / 1000.0;
    float speed = (float)totalBitsReceived / secondsPassed;
    
   
    Serial.print("Speed: ");
    Serial.print(speed);
    Serial.println(" bps");

    
    for (int i = 0; i < totalBitsReceived / 8; i++) {
      char character = EEPROM.read(i);
      Serial.print(character);
    }
    Serial.println(); 

   
    totalBitsReceived = 0;
    previousMillis = currentMillis;
  }
}