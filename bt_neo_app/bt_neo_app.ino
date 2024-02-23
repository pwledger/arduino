#include <SoftwareSerial.h>
SoftwareSerial bt(3,2); // tx = 3 , rx = 2

#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel led3 = Adafruit_NeoPixel(12,8, NEO_GRBW + NEO_KHZ800);

const int bufferSize = 64;
char buffer[bufferSize];
int values[10];  // 예시: 최대 10개의 값을 저장할 리스트

void setup() {
  led3.begin();
  led3.setBrightness(50);
  led3.clear();
  Serial.begin(9600);
  bt.begin(9600);
  pinMode(7,OUTPUT);
  digitalWrite(7,1);
}
char m;
void loop() {
  if (Serial.available() > 0) {
    readList();
    switch(values[0]){
      case 1:
      neoColor(values[1],values[2],values[3]);
      Serial.println("hello");
      break;

    }
  }
}

void neoColor(int r  ,int g, int b){
  for(int i = 0 ; i < 12 ; i++){
    led3.setPixelColor(i , led3.Color(r,g,b));
  }
  led3.show();
}

void readList() {
  Serial.readBytesUntil('\n', buffer, bufferSize);
  int i = 0;
  char* token = strtok(buffer, ",");
  while (token != NULL) {
    values[i] = atoi(token);
    i++;
    token = strtok(NULL, ",");
  }
}
