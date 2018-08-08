const int data = 8;
const int clock = 9;
const int latch = 10;

void setup() {
  pinMode(data, OUTPUT);
  pinMode(clock, OUTPUT);
  pinMode(latch, OUTPUT);
}

void loop() {
  digitalWrite(data, HIGH);
  digitalWrite(clock, HIGH);
  digitalWrite(data, LOW);
  digitalWrite(clock, LOW);
  digitalWrite(latch, HIGH);
  digitalWrite(latch, LOW);
  digitalWrite(clock, HIGH);
  digitalWrite(latch, HIGH);
  digitalWrite(latch, LOW);
  digitalWrite(clock, LOW);
}
