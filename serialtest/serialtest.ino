#include <stdio.h>

void setup() {
  pinMode(13, HIGH);
  Serial.begin(9600);
}

void loop() {
  while (Serial.available() == true) {
    char usr = Serial.read();
    if (usr == '1' || usr == '0'){
      if (usr == '1') digitalWrite(13, HIGH);
      else if (usr == '0') digitalWrite(13, LOW);
      if(digitalRead(13) == HIGH) Serial.println("The LED is on");
      else Serial.println("The LED is off");
    }
    else Serial.println("Unknown command");
  }
}
