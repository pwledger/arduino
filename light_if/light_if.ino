// 가변저항 조건
int melody[7] = {261,293,329,349,293,293,261};
int beat[7] = {1,1,2,1,1,2,3};
void setup() {
  pinMode(A0 , INPUT);
  Serial.begin(9600);
  pinMode(7,OUTPUT);
}
void loop() {
  int re = analogRead(A0); //  조도 센서
  Serial.print("조도 값 : ");
  Serial.println(re);
  // 여러분들이 손으로 조도 센서를 가렸을 때 소리가 나게 만드시오
  // tone(7,261,250); delay(250); 소리나게 하는 코드 
  if (re < 100){
    for(int i = 0 ; i < 7 ; i++){
      tone(7, melody[i] , beat[i]*250);
      delay(beat[i]*250);
      re = analogRead(A0);
      if (re > 100) break;  // 반복 멈추기
    }
  }
}
