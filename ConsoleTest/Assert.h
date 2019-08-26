#pragma once
class Assert
{
public:
	static void AreEqual(int expected, int actual)
	{
		if (expected != actual)
		{
			printf("Assert: extected %d got %d\n", expected, actual);
		}
	}
};
