#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int serval;    // variable to read the value from the analog pin
int motval;

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode(7, OUTPUT);
}

void loop() {
  serval = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  serval = map(serval, 0, 1023, 33, 123);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(serval);                     // sets the servo position according to the scaled value
  motval = analogRead(A1);
  analogWrite(7, motval);
  delay(15);                           // waits for the servo to get there
}
