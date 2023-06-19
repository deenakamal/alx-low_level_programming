#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print alphabet in reverse
 *
 * Return: Alwayes 0 (Success)
*/
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
