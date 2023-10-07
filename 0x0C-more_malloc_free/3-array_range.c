#include "main.h"
/**
 * array_range - This function used to create  an array
 * contain all values from min to max
 * @min: minmum range of values
 * @max: maxmum range values
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *p_to_array;
	int arr_size;

	if (min > max)
		return (NULL);

	arr_size = mix - min + 1;
	p_to_array = malloc(sizeof(int) * arr_size);

	if (p_to_array == NULL)
	{
		return (NULL);
	}

	while (i < arr_size)
	{
		p_to_array[i] = min++;
		i++;
	}
	return (p_to_array);
}
