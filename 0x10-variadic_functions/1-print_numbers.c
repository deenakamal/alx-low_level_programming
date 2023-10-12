#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator: char seoarat between numbers
 * @n: number of paramters
 * @...: paramters passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* numbers pointer point to all list */
	va_list numbers;
	int i = n;

	va_start(numbers, n);

	while (i--)
	{
		printf("%d", va_arg(numbers, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
