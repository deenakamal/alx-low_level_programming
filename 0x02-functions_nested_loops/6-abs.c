#include "main.h"
/**
 * _abs - compute the absolute value
 *
 * @n: input integer
 *
 * Return: integer
*/

int _abs(int n)
{
	if (n <= 0)
	{
		return (n);
	}
	else
	{
		n = -n;
	}
	return (n);
}
