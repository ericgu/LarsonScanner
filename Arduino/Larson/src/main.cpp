#include <Arduino.h>
#include <LedStrip.h>
#include <Animater.h>

LedStrip ledStrip;
Animater animater;

void setup() {
  ledStrip.setup();
}

void loop() {
  animater.doAnimationStep(ledStrip);
  delay(60);
}