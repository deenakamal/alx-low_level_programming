#include "main.h"
#include <string.h>
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

	if (nmemb == 0 || size == 0)
		return (NULL);

	/* clac_size used to calculate allocated memory */
	calc_size = nmemb * size;

	int *block = malloc(calc_size);

	/*check if malloc fails */
	if (block == NULL)
		return (NULL);
	/* set memory to zero*/
	memset(block, 0, calc_size);

	return (block);
}
