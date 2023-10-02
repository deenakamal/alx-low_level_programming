#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: memory input
 * @src: memory input copied
 * @n: number of bytes
 * Return: return pointer to dest copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itration;

	for (itration = 0; itration < n; itration++)
	{
		/* copy value in src and put it in dest*/
		dest[itration] = src[itration];
	}
	return (dest);
}
