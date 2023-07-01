#include "main.h"
/**
 * reverse_array  - reverse the contant of array
 * @a: input array
 * @n: number of elements of array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
