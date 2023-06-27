#include "main.h"
/**
 * print_rev - prints a string, in reverse
 *
 * @s: input string
 */
void print_rev(char *s)
{
	int i = 0;
	int length = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	while (i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
