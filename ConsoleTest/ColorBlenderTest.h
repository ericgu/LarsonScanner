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
		Assert::AreEqual(  0, color.Green);
		Assert::AreEqual(255, color.Blue);
	}

	static void TestOneStep()
	{
		ColorBlender colorBlender;

		colorBlender.blendToColor(LedColor(255, 0, 255), 1);

		LedColor color = colorBlender.getCurrentColor();
		Assert::AreEqual(0, color.Red);
		Assert::AreEqual(0, color.Green);
		Assert::AreEqual(0, color.Blue);

		colorBlender.step();

		color = colorBlender.getCurrentColor();
		Assert::AreEqual(255, color.Red);
		Assert::AreEqual(0, color.Green);
		Assert::AreEqual(255, color.Blue);
	}

	static void TestTwoSteps()
	{
		ColorBlender colorBlender;

		colorBlender.blendToColor(LedColor(255, 0, 255), 2);

		LedColor color = colorBlender.getCurrentColor();
		Assert::AreEqual(0, color.Red);
		Assert::AreEqual(0, color.Green);
		Assert::AreEqual(0, color.Blue);

		colorBlender.step();

		color = colorBlender.getCurrentColor();
		Assert::AreEqual(127, color.Red);
		Assert::AreEqual(0, color.Green);
		Assert::AreEqual(127, color.Blue);

		colorBlender.step();

		color = colorBlender.getCurrentColor();
		Assert::AreEqual(255, color.Red);
		Assert::AreEqual(0, color.Green);
		Assert::AreEqual(255, color.Blue);
	}

	static void TestThreeStepsAndHold()
	{
		ColorBlender colorBlender;

		colorBlender.blendToColor(LedColor(10, 0, 0), 3);

		Assert::AreEqual(0, colorBlender.getCurrentColor().Red);
		colorBlender.step();

		Assert::AreEqual(3, colorBlender.getCurrentColor().Red);
		colorBlender.step();

		Assert::AreEqual(6, colorBlender.getCurrentColor().Red);
		colorBlender.step();

		Assert::AreEqual(10, colorBlender.getCurrentColor().Red);
		colorBlender.step();
		
		Assert::AreEqual(10, colorBlender.getCurrentColor().Red);
	}

	static void TestDone()
	{
		ColorBlender colorBlender;

		colorBlender.blendToColor(LedColor(255, 0, 255), 1);

		Assert::AreEqual(0, colorBlender.isDone());
		colorBlender.step();

		Assert::AreEqual(1, colorBlender.isDone());
	}

public:

	static void RunTests()
	{
		TestZeroSteps();
		TestOneStep();
		TestTwoSteps();
		TestThreeStepsAndHold();
		TestDone();
	}

};
