class ColorWheel
{
    int _stepCount;
	ColorBlender _colorBlender;
	LedColor _colors[6] = { 
		LedColor(255, 0, 0), 
		LedColor(255, 255, 0), 
		LedColor(0, 255, 0), 
		LedColor(0, 255, 255), 
		LedColor(0, 0, 255), 
		LedColor(255, 0, 255) };
	int _colorIndex = 0;

    public:
        ColorWheel(int stepCount)
        {
            _stepCount = stepCount;
			_colorBlender.blendToColor(_colors[_colorIndex], 1);
        }

        LedColor getNextColor()
        {
			_colorBlender.step();
			LedColor ledColor = _colorBlender.getCurrentColor();
			if (_colorBlender.isDone())
			{
				_colorIndex = (_colorIndex + 1) % 6;
				_colorBlender.blendToColor(_colors[_colorIndex], _stepCount);
			}

			return ledColor;
        }
};