#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: generate character print alphabet
 *
 * Return: Alwayes 0 (success)
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
