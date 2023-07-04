#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: input
 * @c: input
 * Return: pointer to first chracter c in string s
 */
char *_strchr(char *s, char c)
{
	int iteration;

	for (iteration = 0; s[iteration] >= '\0'; iteration++)
	{
		if (s[iteration] == c)
		{
			return (s + iteration);
		}
	}
	return (0);
}
