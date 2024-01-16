#define da 220 //낮은라
#define das 233 //낮은라#
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
int melody[18] = {d,d1,a,gs,g,f,d,f,g,c,d1,a,gs,g,f,d,f};
int beat[18] =   {3,2,3,3,3,1,1,1,1,3,2,3,3,3,1,1,1,1};

// 가변저항과 조건
void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(7,OUTPUT);
}
void loop() {
  int re = analogRead(A0);
  Serial.println(re);
  if(re > 1000) {
    tone(7,261,500);
    delay(500);
  }
  if(900 < re && re < 1000){
    tone(7,293,500);
    delay(500);
  }
  if(800 < re && re < 900){
    tone(7,329,500);
    delay(500);
  }
  // a 값이 300보다 작으면  melody 가 연주가 되게하시오
   if(re < 300){
    for (int i = 0 ; i < 18 ; i++){
      tone(7,melody[i] , beat[i]*250);
      delay(beat[i]*250);
      // re 값이 300 보다 크면 break;
      re = analogRead(A0);
      if(re > 300){
        break;
      }
    }
   }
}


