void setup() {
  Serial.begin(9600);
  Serial.println("Test  LED 13 ");
  pinMode(13,OUTPUT); // 13번 핀 연결
  digitalWrite(13,1);
  delay(1000);
  digitalWrite(13,0);
}

void loop() {
  digitalWrite(13,1);
  delay(1000);
  digitalWrite(13,0);
  delay(1000);

}
