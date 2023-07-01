#include "main.h"
/**
 * _strcat - function appends the src string to the destination
 * @dest: result pointer
 * @src: input string
 * Return: a pointer to the reaulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int c1, c2;
	
	for (c1 = 0; dest[c1]; c1++)
		;
	for (c2 = 0; src[c2]; c2++)
	{
		dest[c1] = src[c2];
		c1++
	}
	return (dest);
}
