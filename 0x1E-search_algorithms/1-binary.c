#include "search_algos.h"

/**
 * binary_search - search inside array using binary search algorithm.
 *
 * @array: pointer to first element in array search in.
 * @size: number of elements.
 * @value: to search.
 * Return: if array null or can;t find value returns -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, start, end;

	if (!array)
		return (-1);
	for (start = 0, end = size - 1; start <= end;)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = start + (end - start) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			end = i - 1;
		else
			start = i + 1;
	}

	return (-1);
}
