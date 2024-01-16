// 가변저항과 조건
void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(7,OUTPUT);
}
void loop() {
  int re = analogRead(A0);
  Serial.println(re);
  if(re > 1000){
    tone(7,261,500);
    delay(500);
  }
}
/*
조건 
== : 같다
> : 왼쪽이 크다
< : 오른쪽이 크다
<= : 오른쪽이 크거나 같다
>= : 왼쪽이 크거나 같다
~= : 서로 같지 않다
&& : and (그리고)
|| : or (또는)
*/