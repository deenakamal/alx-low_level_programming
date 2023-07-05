#include "main.h"
/**
 * _strlen_recursion - get the length of input string
 *
 * @s: input character
 *
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s > '\0')
	{
		l++;
		l = l + _strlen_recursion(s + 1);
	}
	return (l);
}
