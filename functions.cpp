#include "functions.h"

void numberSign(double a)
{
	double* ptr = &a;
	if (*ptr > 0)
		cout << "Number is positive";
	else if (*ptr < 0)
		cout << "Number is negative";
	else 
		cout << "Number is 0";
}