int bin[5] = {0,0,0,0};

void setup() {
  for(int i = 10; i < 14; i++) pinMode(i, OUTPUT);
  pinMode(9, INPUT);
}

void loop() {
  if(digitalRead(9) == LOW) {
    increase(bin);
    ledprint(bin);
    delay(100);
  }
}

int increase(int bin[5]){
  bin ++;
}

int ledprint(int bin[5]){
  int arrval = -1;
  for(int i = 10; i < 14; i++){
    arrval ++;
    digitalWrite(i,bin[arrval]);
  }
}

/* INCREASE:

   int onelen;
  for(int i = 0; i < 4; i++){
    if(bin[0] == 0) bin[0] == 1;
    else if(bin[i] == 0 && bin[i - 1] == 1){
      bin[i] == 1;
      break;
    }
  }

*/
