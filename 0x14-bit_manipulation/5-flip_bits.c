#include "main.h"

/**
 * flip_bits - that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits  need to flip
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_value = n ^ m;
	unsigned int num_of_bit = 0;

	while (xor_value)
	{
		if (xor_value & 1ul)
			num_of_bit++;

		xor_value = xor_value >> 1;
	}
	return (num_of_bit);
}
