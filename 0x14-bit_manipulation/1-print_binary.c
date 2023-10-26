#include "main.h"
/**
 * print_binary - a function that prints the binary of int
 *
 * @n: input number
 */
void print_binary(unsigned long int n)
{
	unsigned long int _bit;
	int index = 63;
	int _count = 0;

	if (n == 0)
		return;

	while (index >= 0)
	{
		_bit = n >> index;
		if (_bit & 1)
		{
			_putchar('1');
			_count++;
		}
		else if (_count)
			_putchar('0');
		index--;
	}

	if (_count == 0)
		putchar('0');
}
