#include "main.h"
/**
 * _isdigit - check for digit
 * @c: character to check
 * Return: 1 if c digit
 * 0 therwise
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
