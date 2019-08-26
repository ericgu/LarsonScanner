class LedColor
{
public:
	int Red;
	int Green;
	int Blue;

	LedColor() : LedColor(0, 0, 0)
	{
	}

	LedColor(int red, int green, int blue)
	{
		Red = red;
		Green = green;
		Blue = blue;
	}
};