#define NUM_LEDS 15

class Animater
{
    int _last = 0;
    int _current = 0;
    int _increment = 1;

	int _color = 0;
	ColorWheel _colorWheel;
	FadingLedStrip _fadingLedStrip;

    public:

	Animater() : _colorWheel(20), _fadingLedStrip(4) {}

    void doAnimationStep(LedStrip &ledStrip) 
    {
		LedColor ledColor = _colorWheel.getNextColor();

		_fadingLedStrip.setColor(_current, ledColor.Red, ledColor.Green, ledColor.Blue);
		_fadingLedStrip.show(ledStrip);

        _last = _current; 
        _current = _current + _increment;

        if (_current == 0 || _current == NUM_LEDS - 1)
        {
            _increment = -_increment;
        }
    }
};