#include "functions.h"

int main()
{
	srand(time(NULL));
	const long SIZE = 10;
	int array_1[SIZE+SIZE], array_2[SIZE], *ptr_1 = array_1, *ptr_2= array_2;
	randomArr(array_1, SIZE + SIZE);
	randomArr(array_2, SIZE);
	printArr(array_1, SIZE + SIZE);
	printArr(array_2, SIZE);
	for (int i = SIZE, j = 0; i < SIZE + SIZE; ++i, ++j)
	{
		*(ptr_1 + i) = *(ptr_2 + j);
	}
	printArr(array_1, SIZE + SIZE);
	return 0;
}