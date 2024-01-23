void setup() {
  Serial.begin(9600); 
  pinMode(9, OUTPUT); // 트리거핀 9
  pinMode(8, INPUT);  // 에코핀 8번
}
void loop()
{
  long duration, distance;
  digitalWrite(9, HIGH);
  delayMicroseconds(10); // 0.00001
  digitalWrite(9, LOW);

  duration = pulseIn (8, HIGH);  //초음파가 반사되어 돌아오는 시간을 보여줍니다.
  distance = duration * 34000 / 1000000 /2;  //측정된 물체로부터 거리값(cm값)을 보여줍니다.

  Serial.print(duration ); 
  Serial.println(" 시간");
  Serial.print(distance); 
  Serial.println(" Cm");
  delay(100); 
  // 거리가 20 이랑 같을 때 tone(7,261,500) 소리가 나도록 하시오
  if(distance == 20){
     tone(7,261,500);
  }
  // 거리가 50 같을 때  tone(7,293,500) 소리가 나도록 하시오
  if (distance == 50){
    tone(7,293,500);
  }
}
/*
== : (distance == 23)
= : a = 10
> : (distance > 23)
< : (distance < 15)
<= : (distance <= 15) 15 이하 
>= : (distance >= 15) 15 이상
&& : and
|| : or
*/






