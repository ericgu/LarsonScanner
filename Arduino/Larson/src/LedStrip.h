#define FASTLED_ESP8266_NODEMCU_PIN_ORDER
#include <fastled.h>

#define NUM_LEDS 15
#define DATA_PIN 3

class LedStrip
{
    CRGB _leds[NUM_LEDS];

    public:
    void setup()
    {
        FastLED.addLeds<NEOPIXEL, DATA_PIN>(_leds, NUM_LEDS);
    }

    void setColor(int ledIndex, int red, int green, int blue)
    {
        _leds[ledIndex] = CRGB(red, green, blue);
    }

    void show()
    {
        FastLED.show();
    }
};
