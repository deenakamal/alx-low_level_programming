#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy of the string given as a parameter.
 * @str: char input
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	int i = 0;
	int length = 0;
	char *array;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;
	array = malloc(sizeof(char) * (length + 1));

	if (array == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		array[i] = str[i];
		i++;
	}
	return (array);
}
