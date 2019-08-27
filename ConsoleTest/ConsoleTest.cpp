#include "stdafx.h"
#include "..\Arduino\Larson\src\LedColor.h"
#include "LedStrip.h"
#include "Assert.h"
#include "ColorBlenderTest.h"
#include "ColorWheelTest.h"
#include "..\Arduino\Larson\src\Animater.h"

void animaterTest()
{
	LedStrip ledStrip;
	Animater animater;

	for (int i = 0; i < 30; i++)
	{
		animater.doAnimationStep(ledStrip);
	}
}

int main()
{
	//animaterTest();

	ColorBlenderTest::RunTests();
	ColorWheelTest::RunTests();

    return 0;
}

