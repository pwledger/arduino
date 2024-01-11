#define c 261 //도
#define cs 277 //도#
#define d 293 //레
#define ds 311 //레#
#define e 329 //미
#define f 349 //파
#define fs 369 //파#
#define g 391 //솔
#define gs 415 //솔#
#define a 440 //라
#define as 466 //라#
#define b 493 //시
#define c1 523 //높은도
#define c1s 554 //높은도#
#define d1 587 //높은레
#define d1s 622 //높은레# 
#define e1 659 //높은미  
#define f1 698 //높은파
#define f1s 739 //높은파#  
#define g1 783 //높은솔
#define g1s 830 //높은솔#
#define a1 880 //높은라
#define a1s 932  //높은라#
#define b1 987 //높은시
// 미레도레미미미 레레레 미미미 
int melody[25] = {e,d,c,d, e,e,e, d,d,d, e,e,e,
                  e,d,c,d, e,e,e, d,d,e, d,c};
int beat[25] =   {3,1,2,2, 2,2,4, 2,2,4, 2,2,4,
                  3,1,2,2, 2,2,4, 2,2,3,1, 8};
int reds[5] =   {255,0,0,255,255};
int greens[5] = {0,255,0,255,0};
int blues[5] =  {0,0,255,0,255};

void setup() {
  pinMode(7,OUTPUT); // 스피커
  pinMode(9,OUTPUT); //3색LED (빨강)
  pinMode(10,OUTPUT); //3색LED (초록)
  pinMode(11,OUTPUT); //3색LED (파랑)

  // 반복문
  for (int i = 0 ; i < 25 ; i++){
    tone(7,melody[i] , beat[i]*250);
    analogWrite(9, reds[i%5]);
    analogWrite(10, greens[i%5]); 
    analogWrite(11, blues[i%5]);
    delay(beat[i]*250);

  }

}
void loop(){

}