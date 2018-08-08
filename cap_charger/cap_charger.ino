void setup() {
  pinMode(5,INPUT);
  pinMode(4,OUTPUT);
  digitalWrite(13,HIGH);
}

void loop() {
  if (digitalRead(5) == LOW) digitalWrite(4,HIGH);
  else digitalWrite(4,LOW);
}
