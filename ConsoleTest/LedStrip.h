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


class LedStrip
{
	LedColor _colors[15];

public:
	void setColor(int ledNumber, int red, int green, int blue)
	{
		_colors[ledNumber] = LedColor(red, green, blue);
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