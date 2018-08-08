#include <stdio.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16,2);
  lcd.setCursor(2,0);
  Serial.begin(9600);
  lcd.print("start");
}

void loop() {
  while(Serial.available() > 0) {
    char temp = Serial.read();
    lcd.print(temp);
    Serial.print(temp);
  }
}
