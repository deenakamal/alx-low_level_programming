#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print number
 *
 * Return: Alwayes 0 (Success)
*/
int main(void)
{
	int num = 48;

	while (num <= 102)
	{
		putchar(num);

		if (num == 57)
			num = 96;
		num++;
	}
	putchar('\n');
	return (0);
}
