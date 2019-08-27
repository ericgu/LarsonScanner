class ColorBlender
{
	float _red = 0.0F;
	float _green = 0.0F;
	float _blue = 0.0F;
	float _redDelta = 0.0F;
	float _greenDelta = 0.0F;
	float _blueDelta = 0.0F;

    LedColor _targetColor;
	int _steps;

    public:

    LedColor getCurrentColor()
    {
        return LedColor((int) _red, (int)_green, (int)_blue);
    }

    void blendToColor(LedColor targetColor, int steps)
    {
		_steps = steps;
		_targetColor = targetColor;

		if (steps == 0)
		{
			_red = _targetColor.Red;
			_green = _targetColor.Green;
			_blue = _targetColor.Blue;
		}
		else
		{
			_redDelta = (_targetColor.Red - _red) / steps;
			_greenDelta = (_targetColor.Green - _green) / steps;
			_blueDelta = (_targetColor.Blue - _blue) / steps;
		}
    }

	void step()
	{
		if (_steps != 0)
		{
			_red = _red + _redDelta;
			_green = _green + _greenDelta;
			_blue = _blue + _blueDelta;
			_steps--;
		}
	}

	int isDone()
	{
		return _steps == 0 ? 1 : 0;
	}
};