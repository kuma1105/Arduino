#include <SoftwareSerial.h> 

SoftwareSerial mySerial(6,7); //RX, TX 설정

void setup() { 
  Serial.begin(9600); mySerial.begin(9600);
} 

void loop() {
  if(mySerial.available()) { 
    Serial.write(mySerial.read()); 
    }
  if(Serial.available()) {
    mySerial.write(Serial.read()); 
  } 
}
