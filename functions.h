#include "lib.h" 

template<typename T>
void swapFunc(T& a, T& b)
{
	T *ptr_1 = &a, *ptr_2 = &b, temp;
	temp = *ptr_1;
	*ptr_1 = *ptr_2;
	*ptr_2 = temp;
}