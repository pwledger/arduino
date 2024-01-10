void setup() {
  pinMode(7,OUTPUT);

  tone(7,261,500);
  delay(500);

  int melodys[3] = {261 , 293 , 329};
  int beat[3] = {500,500,1000}

  for(int i = 0 ; i < 3 ; i += 1){
    tone(7 , melodys[i] , beat[i]);
    delay(beat(i));
  }

}
void loop(){

}