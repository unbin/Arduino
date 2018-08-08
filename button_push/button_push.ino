const int buttonPin = 9;
int buttonState = 0;

void setup() {
  lcd.begin(16, 2);
  pinMode(buttonPin, INPUT);
  digitalWrite(9, HIGH);
  
}

void loop() {
  lcd.clear();
    buttonState = digitalRead(buttonPin);
    while (buttonState == HIGH){
      buttonState = digitalRead(buttonPin);
      lcd.print("Push the button           ");
      lcd.clear();
    }
    lcd.clear();
    while (1 == 1){
      lcd.print("You pressed the");
      lcd.setCursor(5,2);
      lcd.print("button                      ");
      lcd.clear();
    }
} 
