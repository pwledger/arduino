#include <SoftwareSerial.h>

SoftwareSerial bt(3,2); // tx = 3 , rx = 2

void setup() {
  Serial.begin(9600);
  bt.begin(9600);
}

void loop() {
  if(bt.available()){
    Serial.write(bt.read());
  }
  if(Serial.available()){
    bt.write(Serial.read());
  }
}
