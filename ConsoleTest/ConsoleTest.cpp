#include "stdafx.h"
#include "LedStrip.h"
#include "..\Arduino\Larson\src\Animater.h"

int main()
{
	LedStrip ledStrip;
	Animater animater;

	for (int i = 0; i < 30; i++)
	{
		animater.doAnimationStep(ledStrip);
	}

    return 0;
}

