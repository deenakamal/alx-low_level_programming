#include "main.h"
/**
 * swap_int - swaps the values of two integer
 * @a: 1 input
 * @b: 2 input
 */
void swap_int(int *a, int *b)
{
	int new_var;

	new_var = *a;
	*a = *b;
	*b = new_var;
}
