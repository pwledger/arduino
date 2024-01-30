#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel led3 = Adafruit_NeoPixel(12,8, NEO_GRBW + NEO_KHZ800); //(개수, 연결한 핀 , 네오픽셀 종류)

void setup() {
  led3.begin();
  led3.setBrightness(50);                
  led3.clear();
  Serial.begin(9600);
}
String s = ""; //빈 문자열 만들기

void loop() {
  if(Serial.available()){  // 시리얼로 값이 있을 때 
    s = "";
    char input = Serial.read();  // 읽어오기 
    s += input;
    if (s == "r") red();
    if (s == "g") green();
    if (s == "b") blue();
  }
}

//빨강으로 만들기
void red(){
  for(int i = 0 ; i < 12 ; i++){
    led3.setPixelColor(i , led3.Color(255,0,0));
  }
  led3.show();
}
void green(){
  for(int i = 0 ; i < 12 ; i++){
    led3.setPixelColor(i , led3.Color(0,255,0));
  }
  led3.show();
}
void blue(){
  for(int i = 0 ; i < 12 ; i++){
    led3.setPixelColor(i , led3.Color(0,0,255));
  }
  led3.show();
}






