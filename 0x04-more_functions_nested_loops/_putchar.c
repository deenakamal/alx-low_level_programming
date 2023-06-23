#include <unistd.h>
#include "main.h"
/**
 * _putchar - write the character
 *
 * @c: the input of function
 *
 * Return: on success 1.
 * on error -1, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
