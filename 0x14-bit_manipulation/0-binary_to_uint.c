#include "main.h"
/**
 * binary_to_uint - function that converts a binary to an unsigned int
 *
 * @b: pointer to a string
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_number = 0;
	int index;

	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		converted_number = converted_number * 2 + (b[index] - '0');
	}
	return (converted_number);
}
