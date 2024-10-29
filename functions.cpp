#include "functions.h"

void randomArr(int* ptr, int size)
{
	for (int i = 0; i < size; ++i) {
		*(ptr + i) = rand() % 100;
	}
}

void printArr(int* ptr, int size)
{
	for (int i = 0; i < size; ++i) {
		cout << *ptr << " ";
		++ptr;
	}
	cout << endl;
}
