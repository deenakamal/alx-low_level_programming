#include "main.h"
/**
 * print_alphabet - function print alphabet
 *
*/

void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++
	}
	_putchar('\n');
}
