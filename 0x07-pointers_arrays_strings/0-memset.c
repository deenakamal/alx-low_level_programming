#include "main.h"
/**
 * _memset - fill memory with constant byte
 *
 * @s: pointer to  the value
 * @b: value input
 * @n: number of byte
 * Return: pointer to area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int iteration;

	for (iteration = 0; n > 0 ; iteration++)
	{
		s[iteration] = b;
		n--;
	}
	return (s);
}
