#include <Servo.h>
#define MOTPIN1 9
#define MOTPIN2 10
#define MOTPIN3 11
#define SERVPIN 0

Servo servo1;

void setup() {
  servo1.attach(7);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void servo(int &serval){
  serval = analogRead(SERVPIN);
  serval = map(serval, 0, 1023, 33, 123);
  servo1.write(serval);
  Serial.print("Servo: ");
  Serial.println(serval);
}

void motor(int &motval){
  motval = analogRead(1);
  motval = map(motval, 0, 1023, 0, 255);
  analogWrite(MOTPIN1, motval);
  analogWrite(MOTPIN2,motval);
  analogWrite(MOTPIN3,motval);
  Serial.print("Motor: ");
  Serial.println(motval);
}

void loop() {
  int serval;
  int motval;
  servo(serval);
  motor(motval);
}
