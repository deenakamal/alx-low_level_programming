#include "variadic_functions.h"
/**
 * print_all - used to print anything
 * @format: list of arguments
 * @...: arguments to func
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list prm;
	int i;
	float f;
	char *s;
	char *_sep = "";

	va_start(prm, format);
	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", _sep, va_arg(prm, int));
				break;
			case 'i':
				printf("%s%d", _sep, va_arg(prm, int));
				break;
			case 'f':
				f = va_arg(prm, double);
				printf("%s%f", _sep, f);
				break;
			case 's':
				s = va_arg(prm, char*);
				if (!s)
					printf("(nil)");
				printf("%s%s", _sep, s);
				break;
			default:
				break;
			}
			_sep = ", ";
			i++;
	}
	printf("\n");
	va_end(prm);
}
