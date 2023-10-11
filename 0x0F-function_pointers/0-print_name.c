#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 *
 * @name: The name input
 * @f: The pointer to function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
