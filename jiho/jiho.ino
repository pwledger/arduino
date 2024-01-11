#define c 261 //도
#define d 293 //레
#define e 329 //미
#define f 349 //파
#define g 391 //솔
#define a 440 //라
#define as 466 //라# 시b
#define b 493 //시

#define c1 523 //
#define c1s 554 
#define d1 587
#define d1s 622
#define e1 659
#define f1 698
#define f1s 739
#define g 622
// 멜로디 리스트 만들기
// 미레도레미미미 레레레 미미미 
int melody[9] = {c,e1,c,e1, c,as, c,e1,c};
int beat[9] =   {1,1,1,2,1,1, 1,1,6};

int reds[6] =   {255,0,0,255,0,255};
int greens[6] = {0,255,0,255,255,0};
int blues[6] =  {0,0,255,0,255,255};


void setup() {
  pinMode(7,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  // 반복문
  for (int i = 0 ; i < 9 ; i++){
    tone(7,melody[i] , beat[i]*200);
    analogWrite(9, reds[i%6]);
    analogWrite(10, greens[i%6]);
    analogWrite(11, blues[i%6]);
    delay(beat[i]*200);

  }

}
void loop(){

}