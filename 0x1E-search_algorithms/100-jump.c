#include "search_algos.h"
#include <math.h>

/**
 * jump_search - using the Jump search algorithm
 * @array: pointer to the first element
 * @size: number of elements
 * @value: to search for
 * Return: index where value is located otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t left, right, jump, i;

	if (array == NULL)
		return (-1);
	left = 0;
	jump = sqrt(size);
	right = jump;
	while (1)
	{
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
		if (right >= size || array[right] >= value)
			break;
		else if (array[right] < value)
		{
			left = right;
			right += jump;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	for (i = left; i < size && i <= right; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
