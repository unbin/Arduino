#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup() {
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  lcd.begin(16,2);
  lcd.clear();
  lcd.print("Initializing");
  for(int v = 0; v < 2; v++){
    for(int i = 0; i < 16; i++){
      delay(100);
      lcd.setCursor(i,1);
      lcd.print("*");
    }
    for(int i = 0; i < 16; i++){
      delay(100);
      lcd.setCursor(i,1);
      lcd.print(" ");
    }
  } 
}

void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Press the");
  lcd.setCursor(0,1);
  lcd.print("button...");
  lcd.setCursor(0,0);
  delay(300);
  while(digitalRead(8) == LOW){}
  digitalWrite(9,HIGH);
  for(int x = 0; x < 50; x++){
    lcd.setCursor(0,0);
    if(x % 2 == 0) digitalWrite(9,HIGH);
    else digitalWrite(9,LOW);
    for(int i = 0; i < 32; i ++){
      if (i < 17) lcd.setCursor(i,0);     
      else if (i > 16) lcd.setCursor(i - 17,1);
      lcd.print(int(rand()));
    }
  }
  digitalWrite(10,HIGH);
  delay(300);
  while(digitalRead(8) == LOW){}
  digitalWrite(10,LOW);
}
