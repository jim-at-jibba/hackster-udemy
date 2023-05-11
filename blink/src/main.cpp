#include <Arduino.h>

void setup(){
  pinMode(13, OUTPUT);
}

void loop(){
  // zero to 5v
  digitalWrite(13, HIGH);
  delay(1000);
  // 5v to zero
  digitalWrite(13, LOW);
  delay(1000);
}

