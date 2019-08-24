#include <Arduino.h>
#define FASTLED_ESP8266_NODEMCU_PIN_ORDER
#include <fastled.h>

#define NUM_LEDS 15
#define DATA_PIN 3

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

int last = 0;
int current = 0;
int increment = 1;

void loop() {

  leds[last] = CRGB::Black;

  leds[current] = CRGB::Red;
  FastLED.show();
  last = current;
  current = current + increment;

  if (current == 0 || current == NUM_LEDS - 1)
  {
    increment = -increment;
  }

  delay(30);
}