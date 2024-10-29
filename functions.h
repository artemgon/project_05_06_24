#include "lib.h" 

template<typename T>
T sumFunc(T* ptr, int size)
{
	T sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += *(ptr + i);
 	}
	return sum;
}


