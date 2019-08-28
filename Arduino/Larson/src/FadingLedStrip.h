class FadingLedStrip
{
	int _steps;

	ColorBlender _blenders[15];

public:
	FadingLedStrip(int steps)
	{
		_steps = steps;
	}

	void setColor(int ledNumber, int red, int green, int blue)
	{
		_blenders[ledNumber].blendToColor(LedColor(red, green, blue), 0);
		_blenders[ledNumber].blendToColor(LedColor(0, 0, 0), _steps);
	}

	void show(LedStrip& ledStrip)
	{
		for (int i = 0; i < 15; i++)
		{
			LedColor ledColor = _blenders[i].getCurrentColor();
			ledStrip.setColor(i, ledColor.Red, ledColor.Green, ledColor.Blue);
			_blenders[i].step();
		}

		ledStrip.show();
	}
};