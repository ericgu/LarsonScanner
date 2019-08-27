#include "stdafx.h"
#include "..\Arduino\Larson\src\LedColor.h"
#include "LedStrip.h"
#include "..\Arduino\Larson\src\Animater.h"
#include "Assert.h"
#include "ColorBlenderTest.h"

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

    return 0;
}

