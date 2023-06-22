#include "main.h"
/**
 * print_last_digit - function for  print last digit
 *
 * @n: number of integer
 *
 * Return: last digit
*/

int print_last_digit(int n)
{
	int result;

	if (n < 0)
		result = -1 * (n % 10);
	else
		result = n % 10;
	_putchar(result + '0');
	return (result);
}
