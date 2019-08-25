#pragma once

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
