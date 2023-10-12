#include "variadic_functions.h"
/**
 * print_strings - print string followed by new line
 * @separator - the string to be printed between the strings
 * @n: number of paramters
 * @...: paramters
 * Rerturn: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *str;

	unsigned int i = 0;

	va_start(strs, n);

	while (i < n)
	{
		str = va_arg(strs, char *);

		if (str == NULL)
			printf("(nil)");
		printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(strs);
}
