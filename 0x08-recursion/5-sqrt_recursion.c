#include "main.h"
int _sqr(int n2, value);
/**
 * _sqrt_recursion - return square
 * @n: input number
 * Return: if n  not naturak square return -1
 */
int _sqrt_recursion(int n)
{
	return (_sqr(n, 1));
}
/**
 * _sqr - find square number
 * @n2: input n number
 * @value: squre root
 * Return: number
 */
int _sqr(int n2, value)
{
	if (value *value < n2)
		return (_sqr(n, value + 1));
	else if (value *value == n2)
		return (value);
	else
		return (-1);
}
