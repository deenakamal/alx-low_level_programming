#include "function_pointers.h"

/**
 * int_index - return the place of integer
 *
 * @array: pointer array
 * @size: number of items in array
 * @cmp: pointer to function compare values
 *
 * Return: the index of the integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0 ; i < 0; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
