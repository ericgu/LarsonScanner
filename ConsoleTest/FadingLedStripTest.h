#pragma once
#include "..\Arduino\Larson\src\FadingLedStrip.h"

class FadingLedStripTest
{
	static void TestSingleFade()
	{
		FadingLedStrip fadingLedStrip(4);
		LedStrip ledStrip;

		LedColor ledColor;

		fadingLedStrip.setColor(1, 255, 0, 0);

		fadingLedStrip.show(ledStrip);
		ledColor = ledStrip.getColor(1);
		Assert::AreEqual(255, ledColor.Red);

		fadingLedStrip.show(ledStrip);
		ledColor = ledStrip.getColor(1);
		Assert::AreEqual(191, ledColor.Red);

		fadingLedStrip.show(ledStrip);
		ledColor = ledStrip.getColor(1);
		Assert::AreEqual(127, ledColor.Red);

		fadingLedStrip.show(ledStrip);
		ledColor = ledStrip.getColor(1);
		Assert::AreEqual(63, ledColor.Red);

		fadingLedStrip.show(ledStrip);
		ledColor = ledStrip.getColor(1);
		Assert::AreEqual(0, ledColor.Red);
	}

public:

	static void RunTests()
	{
		TestSingleFade();
	}

};
