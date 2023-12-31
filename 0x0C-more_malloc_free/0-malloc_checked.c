#include "main.h"
/**
 * malloc_checked - allocate a single large block of memory
 * @b: size of value to allocate in memory
 *
 * Return: pointer to allocate memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
