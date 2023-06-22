#include "main.h"
/**
 * print_alphabet_x10 - print 10 times alphabet
 *
*/

void print_alphabet_x10(void)
{
	int ch = 'a';
	int count = 0;

	while (count < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		count++;
	}
}
