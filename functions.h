#include "lib.h" 

template<typename T>
T addition(int quantity, T a, ...)
{
	va_list va;
	va_start(va, a);
	T sum = a;
	for (int i = 1; i < quantity; ++i) {
		T temp = va_arg(va, T);
		sum += temp;
	}
	va_end(va);
	return sum;
}

template<typename T>
T subtraction(int quantity, T a, ...)
{
	va_list va;
	va_start(va, a);
	T diff = a;
	for (int i = 1; i < quantity; ++i) {
		T temp = va_arg(va, T);
		diff -= temp;
	}
	va_end(va);
	return diff;
}

template<typename T>
T multiplication(int quantity, T a, ...)
{
	va_list va;
	va_start(va, a);
	T product = a;
	for (int i = 1; i < quantity; ++i) {
		T temp = va_arg(va, T);
		product *= temp;
	}
	va_end(va);
	return product;
}

template<typename T>
T division(int quantity, T a, ...)
{
	va_list va;
	va_start(va, a);
	T quotient = a;
	for (int i = 1; i < quantity; ++i) {
		T temp = va_arg(va, T);
		quotient /= temp;
	}
	va_end(va);
	return quotient;
}