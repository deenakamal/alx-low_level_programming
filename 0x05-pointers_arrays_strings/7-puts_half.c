include "main.h"
/**
 * puts_half - a function that prints half of a string
 *
 * @str: input of string
 */
void puts_half(char *str)
{
	int i;

	for (str[i] != '\0'; i++)
		;
	i++;
	for (i = i / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
