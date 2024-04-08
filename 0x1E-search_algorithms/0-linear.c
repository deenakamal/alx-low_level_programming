#include "search_algos.h"

/**
 * linear_search - linear search algorithm.
 * @array: pointer to the first element of the array
 * @size: number of elements
 * @value: to search
 * Return: index or -1 if the value doesn't presented on the array.
*/

int linear_search(int *array, size_t size, int value)
{
	int i_;

	if (!array)
		return (-1);

	for (i_ = 0; i_ < (int)size; i_++)
	{
		printf("Value checked array[%d] = [%d]\n", i_, array[i_]);
		if (array[i_] == value)
			return (i_);
	}

	return (-1);
}
