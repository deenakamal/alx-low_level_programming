#include "main.h"
/**
 * more_numbers - print 10 time num 0 to 14
*/

void more_numbers(void)
{
	int count, num;

	for (count = 1; count <= 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar('1');
			_putchar (num % 10 + '0');
		}
		_putchar('\n');
	}
}

