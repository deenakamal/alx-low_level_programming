#include "main.h"
/**
 * is_prime_number - get primew
 * @n: number
 * Return:1 if the number is prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 1)
		return (0);
	if (n % n == 0 && n > 0)
		return (1);
	return (is_prime_number(n - 1));
}

