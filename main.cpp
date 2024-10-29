#include "functions.h"

int main()
{
	int a = 0, a_1 = 1.0, b = -33, c = -1, d = 4, e = 9, f = 10, g = -8, h = 10.0, j = 2.0;
	int result_1 = addition(7, a, b, c, d, e, f, g);
	int result_2 = subtraction(2, a, h);
	cout << result_1 - result_2 << endl;
	int result_3 = multiplication(4, a_1, d, e, h);
	float result_4 = division(2, h, j);
	cout << result_3 << endl;
	cout << result_4 << endl;
	return 0;
}