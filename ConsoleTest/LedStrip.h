#pragma once

#ifdef OldVersion

class LedStrip
{
public:
	void setColor(int ledNumber, int red, int green, int blue)
	{
		printf("LED %d: (%d, %d, %d) \n", ledNumber, red, green, blue);
	}

	void show()
	{
		printf("Show: \n");
	}
};

#else

class LedStrip
{
	LedColor _colors[15];

public:
	void setColor(int ledNumber, int red, int green, int blue)
	{
		_colors[ledNumber] = LedColor(red, green, blue);
	}

	LedColor getColor(int ledNumber)
	{
		return _colors[ledNumber];
	}

	void show()
	{
		printf("Show: ");
		for (int i = 0; i < 15; i++)
		{
			printf("(%d,%d,%d)", _colors[i].Red, _colors[i].Green, _colors[i].Blue);
		}
		puts("");
	}
};

#endif