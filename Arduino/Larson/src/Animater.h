#define NUM_LEDS 15

class Animater
{
    int _last = 0;
    int _current = 0;
    int _increment = 1;

	int _color = 0;
	ColorWheel _colorWheel;

    public:

	Animater() : _colorWheel(20) {}

    void doAnimationStep(LedStrip &ledStrip) 
    {
        ledStrip.setColor(_last, 0, 0, 0);
		LedColor ledColor = _colorWheel.getNextColor();

		ledStrip.setColor(_current, ledColor.Red, ledColor.Green, ledColor.Blue);
		ledStrip.show();

        _last = _current; 
        _current = _current + _increment;

        if (_current == 0 || _current == NUM_LEDS - 1)
        {
            _increment = -_increment;
        }
    }
};