#pragma once
class Assert
{
public:
	static void AreEqual(int expected, int actual)
	{
		if (expected != actual)
		{
			printf("Assert: expected %d got %d\n", expected, actual);
		}
	}
};
