#include "main.h"
/**
 * print_sign - function to print sign of number
 *
 * @n: input number
 *
 * Return: 1 when n > 0, 0 when n=0, -1 when n<0
 *
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
