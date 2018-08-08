/*
7seg dispay pins:
2,4,5,6,7,8,9
*/

void setup() {
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  int volume = 5;
  while(1){
    analogWrite(3,volume);
    if(digitalRead(11) == HIGH && volume < 10){
      volume++;
      delay(200);
    } 
    if(digitalRead(10) == HIGH && volume > 0){
      volume--;
      delay(200); 
    }  
  }
}
