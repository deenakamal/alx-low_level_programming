#include "main.h"
/**
 * _strncpy - copies string
 * @dest: the destination array where the content is to be copied
 * @src: This is the string to be copied
 * @n: number of character to be copied from src
 * Return: copy string to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

