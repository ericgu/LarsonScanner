#pragma once

#include "..\Arduino\Larson\src\ColorBlender.h"

class ColorBlenderTest
{
	static void TestZeroSteps()
	{
		ColorBlender colorBlender;

		colorBlender.blendToColor(LedColor(255, 0, 255), 0);

		LedColor color = colorBlender.getCurrentColor();
		Assert::AreEqual(255, color.Red);
		Assert::AreEqual(  01, color.Green);
		Assert::AreEqual(255, color.Blue);
	}

public:

	static void RunTests()
	{
		TestZeroSteps();
	}

};
