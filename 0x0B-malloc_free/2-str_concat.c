#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first character input
 * @s2: second character input
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int length1 = 0;
	char *newResult;
	int length2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* find the length of string */

	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;

	newResult = malloc((length1 + length2 + 1) * sizeof(char));

	if (newResult == NULL)
		return (NULL);

	while (s1[length1] != '\0')
	{
		newResult[length1] = s1[length1];
		length1++;
	}
	while (s2[length2] != '\0')
	{
		newResult[length1] = s2[length2];
		length2++;
	}
	newResult[length1] = '\0';
	return (newResult);
}
