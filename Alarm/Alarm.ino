void setup() {
 pinMode(3,OUTPUT);
 pinMode(10,INPUT);
 while(digitalRead(10) == LOW){}
}

void loop() {
    analogWrite(3,10);
    delay(1000);
    analogWrite(3,0);
    delay(1000);
}
