#include "main.h"
/**
 * get_bit - function that returns the value of a bit
 * @n: number
 * @index: index
 * Return: the value of the bit at index index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index >= sizeof(n) * 8)
		return (-1);

	value = n >> index & 1;
	return (value);
}
