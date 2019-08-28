#include <Arduino.h>
#include <LedStrip.h>
#include <LedColor.h>
#include <ColorBlender.h>
#include <ColorWheel.h>
#include <FadingLedStrip.h>
#include <Animater.h>

LedStrip ledStrip;
Animater animater;

void setup() {
  ledStrip.setup();
}

void loop() {
  animater.doAnimationStep(ledStrip);
  delay(120);
}