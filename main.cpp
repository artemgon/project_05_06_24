#include "functions.h"

int main()
{
	srand(time(NULL));
	const long SIZE = 10;
	int array[SIZE], *ptr = array;
	for (int i = 0; i < SIZE; ++i) {
		*(ptr + i) = rand() % 100;
	}
	for (int i = 0; i < SIZE; ++i) {
		cout << *ptr << " ";
		++ptr;
	}
	cout << endl;
	int result = sumFunc(array, SIZE);
	cout << result;
	return 0;
}