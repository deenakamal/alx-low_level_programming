#include "main.h"
/**
 * reverse_array  - reverse the contant of array
 * @a: input array
 * @n: number of elements of array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = (n - 1);

	for (i = 0; i < j; i++; j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
