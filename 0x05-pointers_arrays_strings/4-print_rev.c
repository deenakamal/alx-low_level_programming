#include "main.h"
/**
 * print_rev - prints a string, in reverse
 *
 * @s: input string
 */
void print_rev(char *s)
{
	int i = 1;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	while (i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
