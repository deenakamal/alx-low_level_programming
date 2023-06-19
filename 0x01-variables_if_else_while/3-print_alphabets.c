#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: generate alphabet in upper and lower case
 *
 * Return: Alwayes 0 (Success)
*/
int main(void)
{
	char lower_al = 'a';
	char upper_al = 'A';

	while (lower_al <= 'z')
	{
		putchar(lower_al);
		lower_al++;
	}

	while (upper_al <= 'Z')
	{
		putchar(upper_al);
		upper_al++;
	}
	putchar('\n');

	return (0);
}
