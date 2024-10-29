#include "functions.h"

int main()
{
	srand(time(NULL));
	const int size = 7;
	//first variant
	int array[size], *ptr = array, temp = 0;
	randomArr(array, size);
	printArr(array, size);
	for (int i = 0; i < size / 2; ++i)
	{
		temp = array[size - i - 1];
		array[size - i - 1] = *(ptr + i);
		*(ptr + i) = temp;
	}
	printArr(array, size);
	//second variant
	/*int array_1[size], array_2[size], * ptr_1 = array_1, *ptr_2 = &array_2[size-1];
	randomArr(array_1, size);
	printArr(array_1, size);
	for (int i = 0; i < size; ++i) {
		*(ptr_2 + (size - 1 - i)) = *(ptr_1 + i);
	}
	for (int i = 0; i < size; ++i) {
		*(ptr_1 + i) = *(ptr_2 + i);
	}
	printArr(array_1, size);*/
	return 0;
}