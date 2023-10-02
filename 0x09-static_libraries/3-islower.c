#include "main.h"
/**
 * _islower - functionchecks for lowercase
 *
 * @c: the character to checked
 *
 * Return: 1 if char is lowercase, otherwise 0
 *
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
