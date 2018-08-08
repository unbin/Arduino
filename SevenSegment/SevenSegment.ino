#include "SevSeg.h"
#include "stdlib.h"
SevSeg sevseg;

struct time{
  int hour = 0;
  int minute = 0;
  int second = 0;
};

void setup() {
  byte numDigits = 4;
  byte digitPins[] = {2,3,4,5};
  byte segmentPins[] = {6,7,8,9,10,11,12,13};
  sevseg.begin(COMMON_ANODE, numDigits,digitPins,segmentPins);
  sevseg.setBrightness(90);
}

void count(struct time *times){
  delay(1000);
  times->second ++;
  if (times->second == 60){
    times->second = 0;
    times->minute ++;
  }
  if (times->minute == 60){
    times->minute = 0;
    times->hour ++;
  }
  if(times->hour == 12){
    times->hour = 1;
  }
}

void loop() {
  struct time times;
  count(&times);
  sevseg.setNumber(times.hour,times.minute);
  sevseg.refreshDisplay();
}
