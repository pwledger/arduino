#define c 261 //도
#define d 293 //레
#define e 329 //미
#define f 349 //파
#define g 391 //솔
#define a 440 //라
#define b 493 //시
// 멜로디 리스트 만들기
// 미레도레미미미 레레레 미미미 
int melody[25] = {e,d,c,d, e,e,e, d,d,d, e,e,e,
                  e,d,c,d, e,e,e, d,d,e, d,c};
int beat[25] =   {3,1,2,2, 2,2,4, 2,2,4, 2,2,4,
                  3,1,2,2, 2,2,4, 2,2,3,1, 8};
int reds[3] = {255,0,0};
int greens[3] = {0,255,0};
int blues[3] = {0,0,255};

void setup() {
  pinMode(7,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  // 반복문
  for (int i = 0 ; i < 13 ; i++){
    tone(7,melody[i] , beat[i]*250);
    analogWrite(9, reds[i%3]);
    analogWrite(?, ?);
    analogWrite(? ,?);
    delay(beat[i]*250);

  }

}
void loop(){

}