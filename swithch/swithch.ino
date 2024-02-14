#include <SoftwareSerial.h>

SoftwareSerial bt(3,2); // tx = 3 , rx = 2

void setup() {
  Serial.begin(9600);
  bt.begin(9600);
  pinMode(7,OUTPUT);
  digitalWrite(7,1);
}
char m;
void loop() {
  if(bt.available()){
    m = bt.read();
    switch(m){
      case '1': 
      Serial.println("1 번 입니다"); 
      digitalWrite(7,1);
      break;
      case '2': 
      Serial.println("2 번 입니다"); 
      digitalWrite(7,0);
      break;
    }
  }
}
