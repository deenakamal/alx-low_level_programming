#include "main.h"
#include <string.h>
/**
 * _memset - set memory to zero
 * @s: pointer to memory
 * @c: the value you want to set
 * @n: number of byte you want to set
 *
 * Return: pointer to alocated memory
 */
char *_memset(char *s, int c, unsigned int n)
{
	char *_pointer = s;

	while (n--)
	{
		*s++ = c;
	}
	return (_pointer);
}
/**
 * _calloc - allocat memory to array
 * @nmemb: elements number
 * @size: size
 * Return: The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int calc_size;
	char *block;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/* clac_size used to calculate allocated memory */
	calc_size = nmemb * size;

	block = malloc(calc_size);

	/*check if malloc fails */
	if (block == NULL)
		return (NULL);
	/* set memory to zero*/
	_memset(block, 0, calc_size);

	return (block);
}
