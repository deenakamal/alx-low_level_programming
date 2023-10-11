#include "function_pointers.h"

/**
 * array_iterator - a function that prints elements of array
 * @array: array pointer
 * @size: size of elements to print
 * @action: pointer to function to print element
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
