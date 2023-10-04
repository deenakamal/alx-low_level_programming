#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * initializes it with a specific char.
 * @size: size of array
 * @c: character
 * Return: NULL if size = 0 or fail
 * otherwise pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(size * sizeof(char));

	if (size == 0 || array == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}

