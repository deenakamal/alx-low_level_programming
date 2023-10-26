#include "main.h"
/**
 * set_bit - function that sets the value bit to 1
 * @n: pointer to number
 * @index: index that given
 *
 * Return: 1 on success and -1 on error
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
