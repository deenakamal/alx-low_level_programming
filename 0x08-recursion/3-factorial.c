#include "main.h"
/**
 * factorial - get facrotial of given number
 *
 * @n: input number n
 *
 * Return: if n < 0 return -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
