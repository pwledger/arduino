#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel neo = Adafruit_NeoPixel(12,8, NEO_GRBW + NEO_KHZ800); //(개수, 연결한 핀 , 네오픽셀 종류)

void setup() {
  neo.begin();
  neo.setBrightness(50);                
  neo.clear();

  Serial.begin(9600);
}
unsigned long int t = 0; // 초
unsigned long int m = 0; // 분
unsigned long int h = 0; // 시

void loop() {
  neo.setPixelColor(t%12, neo.Color(255, 0, 0) );
  neo.setPixelColor(m%12, neo.Color(0, 255, 0) );
  neo.setPixelColor(h%12, neo.Color(, 0, 255) );
  neo.show();
  t += 1;
  delay(100);
  if (t%12 == 0){
    m += 1;
    t = 0;
    neo.clear();
    if (m%12 == 0){
      h += 1;
      m = 0;
      if (h%12 == 0){
        h = 0;
      }
    }
  }
}
