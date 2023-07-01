#include "main.h"
/**
 * reverse_array  - reverse the contant of array
 * @a: input array
 * @n: number of elements of array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0; j = (n - 1); i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
