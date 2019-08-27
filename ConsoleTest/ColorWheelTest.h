#pragma once
#include "..\Arduino\Larson\src\ColorWheel.h"

class ColorWheelTest
{
	static void TestSingleStepWheel()
	{
		ColorWheel colorWheel(1);
		
		LedColor ledColor = colorWheel.getNextColor();
		Assert::AreEqual(255, ledColor.Red);
		Assert::AreEqual(  0, ledColor.Green);
		Assert::AreEqual(  0, ledColor.Blue);

		ledColor = colorWheel.getNextColor();
		Assert::AreEqual(255, ledColor.Red);
		Assert::AreEqual(255, ledColor.Green);
		Assert::AreEqual(  0, ledColor.Blue);

		ledColor = colorWheel.getNextColor();
		Assert::AreEqual(  0, ledColor.Red);
		Assert::AreEqual(255, ledColor.Green);
		Assert::AreEqual(  0, ledColor.Blue);

		ledColor = colorWheel.getNextColor();
		Assert::AreEqual(  0, ledColor.Red);
		Assert::AreEqual(255, ledColor.Green);
		Assert::AreEqual(255, ledColor.Blue);

		ledColor = colorWheel.getNextColor();
		Assert::AreEqual(  0, ledColor.Red);
		Assert::AreEqual(  0, ledColor.Green);
		Assert::AreEqual(255, ledColor.Blue);

		ledColor = colorWheel.getNextColor();
		Assert::AreEqual(255, ledColor.Red);
		Assert::AreEqual(  0, ledColor.Green);
		Assert::AreEqual(255, ledColor.Blue);

		ledColor = colorWheel.getNextColor();
		Assert::AreEqual(255, ledColor.Red);
		Assert::AreEqual(  0, ledColor.Green);
		Assert::AreEqual(  0, ledColor.Blue);
	}

	static void TestFourStepWheel()
	{
		ColorWheel colorWheel(4);

		LedColor ledColor = colorWheel.getNextColor();
		Assert::AreEqual(255, ledColor.Red);
		Assert::AreEqual(0, ledColor.Green);
		Assert::AreEqual(0, ledColor.Blue);

		ledColor = colorWheel.getNextColor();
		Assert::AreEqual(255, ledColor.Red);
		Assert::AreEqual(63, ledColor.Green);
		Assert::AreEqual(0, ledColor.Blue);

		ledColor = colorWheel.getNextColor();
		Assert::AreEqual(255, ledColor.Red);
		Assert::AreEqual(127, ledColor.Green);
		Assert::AreEqual(0, ledColor.Blue);

		ledColor = colorWheel.getNextColor();
		Assert::AreEqual(255, ledColor.Red);
		Assert::AreEqual(191, ledColor.Green);
		Assert::AreEqual(0, ledColor.Blue);

		ledColor = colorWheel.getNextColor();
		Assert::AreEqual(255, ledColor.Red);
		Assert::AreEqual(255, ledColor.Green);
		Assert::AreEqual(0, ledColor.Blue);

		ledColor = colorWheel.getNextColor();
		Assert::AreEqual(191, ledColor.Red);
		Assert::AreEqual(255, ledColor.Green);
		Assert::AreEqual(0, ledColor.Blue);
	}

public:
	static void RunTests()
	{
		TestSingleStepWheel();
		TestFourStepWheel();
	}
};