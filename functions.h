#include "lib.h" 

template<typename T1, typename T2>
T2 maxFunc(T1 a, T2 b)
{
	T1* ptr_1 = &a;
	T2* ptr_2 = &b;
	return (*ptr_1 > *ptr_2) ? *ptr_1 : *ptr_2;
}
