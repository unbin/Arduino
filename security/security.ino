void setup() {
  pinMode(13,OUTPUT);
  pinMode(3,INPUT);
  pinMode(2,INPUT);
}

void loop(){
  int light;
  int sound;
  int tilt;
  while(1){
    sound = analogRead(A0);
    light = analogRead(A1);
    tilt = analogRead(A3);
    if(sound > 400 || light < 300 || analogRead(A3) != tilt){
      while(digitalRead(2) == false && analogRead(A2) == 0){
        digitalWrite(13,HIGH);
        delay(300);
        digitalWrite(13,LOW);
        delay(300);
      }
    }  
  }
}
