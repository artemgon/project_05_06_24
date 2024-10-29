#include "functions.h"

int main()
{
	srand(time(NULL));
	const long size = 7;
	int array_1[size], array_2[size], * ptr_1 = array_1, * ptr_2 = array_2;
	randomArr(array_1, size);
	printArr(array_1, size);
	for (int i = 0, j = size - 1; i < size; ++i, --j)
	{
		*(ptr_2 - j) = *(ptr_1 + i);
	}
	printArr(array_2, size);
	return 0;
}