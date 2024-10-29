#include "functions.h"

int sumFunc(int* ptr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += *(ptr + i);
	}
	return sum;
}