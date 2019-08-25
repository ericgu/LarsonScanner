#define NUM_LEDS 15

class Animater
{
    int _last = 0;
    int _current = 0;
    int _increment = 1;

    public:

    void doAnimationStep(LedStrip &ledStrip) 
    {
        Serial.println();
        ledStrip.setColor(_last, 0, 0, 0);
        ledStrip.setColor(_current, 255, 0, 0);
        ledStrip.show();

        _last = _current; 
        _current = _current + _increment;

        if (_current == 0 || _current == NUM_LEDS - 1)
        {
            _increment = -_increment;
        }
    }
};