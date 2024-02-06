#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel neo = Adafruit_NeoPixel(12,8, NEO_GRBW + NEO_KHZ800); //(개수, 연결한 핀 , 네오픽셀 종류)

void setup() {
  neo.begin(); // 시작
  neo.setBrightness(50);   // 밝기 정하기             
  neo.clear();
  Serial.begin(9600);
}

// 알람시계 만들기
unsigned long int t = 0; // 초
unsigned long int sec = 10; // 설정한 알람시간
void loop() {
  t = millis(); // 1 초 > 1000
  Serial.println(t/1000);
  if (sec < t/1000  && t/1000  < sec + 10) {
    // 소리 나오게 하기
    tone(7,261,500);
    delay(500);
    // 네오픽셀 색깔 나오게 하기
    for (int i = 0 ; i < 12 ; i++){
      neo.setPixelColor(0, neo.Color(255, 0, 0) );
    }
    neo.show();
    delay(500);
    neo.clear();
    neo.show();
    delay(500);
  }
}




