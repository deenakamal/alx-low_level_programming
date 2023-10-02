#include "main.h"
/**
 * _strncat - concatenates two string
 * @dest: first string
 * @src: SEcond string
 * @n: number of bytes
 * Return: pointer to the resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	/* find size of array*/
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

