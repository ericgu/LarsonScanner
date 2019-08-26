class ColorBlender
{
    LedColor _targetColor;

    public:

    LedColor getCurrentColor()
    {
        return LedColor(_targetColor.Red, _targetColor.Green, _targetColor.Blue);
    }

    void blendToColor(LedColor targetColor, int steps)
    {
        _targetColor = targetColor;
    }

    void step()
    {
    }
};