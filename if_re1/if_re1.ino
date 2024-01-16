//가변 저항 , 조건
#define c 261 //도
#define d 293 //레
#define e 329 //미
#define f 349 //파
#define g 391 //솔
#define a 440 //라
#define b 493 //시
int melody[25] = {e,d,c,d, e,e,e, d,d,d, e,e,e,
                  e,d,c,d, e,e,e, d,d,e, d,c};
int beat[25] =   {3,1,2,2, 2,2,4, 2,2,4, 2,2,4,
                  3,1,2,2, 2,2,4, 2,2,3,1, 8};
void setup() {
  pinMode(A0, INPUT); //핀 A0 입력으로 정하기 
  Serial.begin(9600); // 통신 속도정하기
  pinMode(7,OUTPUT);
}
void loop() {
  int re = analogRead(A0);
  Serial.println(re);
  if (re > 1000){
    tone(7,261,500);
    delay(500);
  }
  if (900 < re && re <= 1000){
    tone(7,293,500);
    delay(500);
  }
  if (800 < re && re <= 900){
    tone(7,329,500);
    delay(500);
  }
  // re 값이 300 보다 작을 때 도레미파솔라시 연주가 되도록 하시오 
  if(re < 300){
    for(int i = 0 ; i < 25 ; i++){
      tone(7,melody[i],beat[i]*250);
      delay(beat[i]*250);
      re = analogRead(A0);
      if (re > 300) break; // 반복 종료
    }
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


