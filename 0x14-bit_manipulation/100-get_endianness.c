#include "main.h"

/**
 * get_endianness -  a function that checks the endliannes return it
 *
 * Return: 0 if big endlian
 * 1 for little endlian
 */
int get_endianness(void)
{
	unsigned int _n = 1;
	char *c = (char *)&_n;

	if (*c == 1)
		return (1);
	else
		return (0);
}
