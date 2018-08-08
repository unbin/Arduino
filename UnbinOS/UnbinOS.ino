const int button1pin = 2;
const int button2pin = 3;
const int button3pin = 4;
const int button4pin = 5;
const int button5pin = 6;
const int button6pin = 7;
const int button7pin = 8;
const int button8pin = 9;
const int button9pin = 10;
const int button0pin = 11;
const int buttonenterpin = 12;

int button1state = 0;
int button2state = 0;
int button3state = 0;
int button4state = 0;
int button5state = 0;
int button6state = 0;
int button7state = 0;
int button8state = 0;
int button9state = 0;
int button0state = 0;
int buttonenterstate = 0;

void setup() {
 lcd.begin(16, 2);
 pinMode(button1pin, INPUT);
 pinMode(button2pin, INPUT);
 pinMode(button3pin, INPUT);
 pinMode(button4pin, INPUT);
 pinMode(button5pin, INPUT);
 pinMode(button6pin, INPUT);
 pinMode(button7pin, INPUT);
 pinMode(button8pin, INPUT);
 pinMode(button9pin, INPUT);
 pinMode(button0pin, INPUT);
 pinMode(buttonenterpin, INPUT)
 digitalWrite(button1state, HIGH);
 digitalWrite(button2state, HIGH);
 digitalWrite(button3state, HIGH);
 digitalWrite(button4state, HIGH);
 digitalWrite(button5state, HIGH);
 digitalWrite(button6state, HIGH);
 digitalWrite(button7state, HIGH);
 digitalWrite(button8state, HIGH);
 digitalWrite(button9state, HIGH);
 digitalWrite(button0state, HIGH);
 digitalWrite(buttonenterstate, HIGH)
 lcd.print("Welcome to");
 lcd.setCursor(0,2);
 lcd.print("Unbin OS.");
 while (buttonenterstate == HIGH){
  buttonenterstate = digitalRead(buttonenterpin);
 }
 lcd.clear();
}

void loop() {
  lcd.print("Choose an option");
  button1state = digitalRead(button1pin);
  button2state = digitalRead(button2pin);
  button3state = digitalRead(button3pin);
  button4state = digitalRead(button4pin);
  button5state = digitalRead(button5pin);
  button6state = digitalRead(button6pin);
  button7state = digitalRead(button7pin);
  button8state = digitalRead(button8pin);
  button9state = digitalRead(button9pin);
  button0state = digitalRead(button0pin);
  if (button0state == LOW){
  }
  else if (button1state == LOW){
  }
  else if (button2state == LOW){
  }
  else if (button3state == LOW){
  }
  else if (button4state == LOW){
  }
  else if (button5state == LOW){
  }
  else if (button6state == LOW){
  }
  else if (button7state == LOW){
  }
  else if (button8state == LOW){
  }
  else if (button9state == LOW){
  }
}
