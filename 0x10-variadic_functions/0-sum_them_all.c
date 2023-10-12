#include "variadic_functions.h"
/**
 * sum_them_all - sum all paramters passed
 * @n: number of paramters count
 * @...: parameters passed to function
 * Return: n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	int i = n;
	va_list numbers;

	va_start(numbers, n);

	while (i--)
		sum = sum + va_arg(numbers, int);
	va_end(numbers);
	return (sum);
}
