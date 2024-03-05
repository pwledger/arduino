void setup() {
  Serial.begin(9600);
  pinMode(12alRead(12);
  if (val == 1) {
    digitalW, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}
int count = 0;
void loop() {
  int val = 0;
  val = digitrite(3, HIGH);
    delay(500);
    count += 1;
    Serial.println(count);
  } else {
    digitalWrite(3, LOW);
  }
  //count == 10 if (count == 10)
  // 켜기
  if (count == 2) {
    digitalWrite(4, HIGH);
  }
  if (count == 4) {
    digitalWrite(4, LOW);
    count = 0;
  }
}