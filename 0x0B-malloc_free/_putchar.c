#include "main.h"
#include <unistd.h>
/**
 * _putchar - write a single character to the standard output stream
 * @c: The character input to print
 * Return: On success 1.
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
