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
	unsigned long int oxr_value = n ^ m;
	unsigned int num_of_bit;

	while (xor_value)
	{
		xor_value &= (xor_value - 1);
		num_of_bit++;
	}
	return (num_of_bit);
}
