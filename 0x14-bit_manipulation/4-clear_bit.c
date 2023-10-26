#include "main.h"

/**
 * clear_bit -  a function thatset value of bit to 0
 *
 * @n: long integer given
 * @index: given index to set value at
 *
 * Return: 1 On success -1 On error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n &= ~(1UL << index);

	return (1);
}
