#define NUM_LEDS 15

class Animater
{
    int _last = 0;
    int _current = 0;
    int _increment = 1;

	int _color = 0;

    public:

    void doAnimationStep(LedStrip &ledStrip) 
    {
        ledStrip.setColor(_last, 0, 0, 0);
		if (_color == 0)
		{
			ledStrip.setColor(_current, 255, 0, 0);
		}
		else if (_color == 1)
		{
			ledStrip.setColor(_current, 0, 255, 0);
		}
		else
		{
			ledStrip.setColor(_current, 0, 0, 255);
		}
		ledStrip.show();

        _last = _current; 
        _current = _current + _increment;

        if (_current == 0 || _current == NUM_LEDS - 1)
        {
            _increment = -_increment;

			_color = _color + 1;
			if (_color == 3)
			{
				_color = 0;
			}
        }
    }
};