#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: input character
 */
void rev_string(char *s)
{
	int length;
	int i;
	char rev_string = s[0];

	for (length = 0 ; s[length] != '\0'; length++)
		;
	for (i = 0; i < length; i++)
	{
		count--;
		rev_string = s[i];
		s[i] = s[length];
		s[length] = rev_string;
	}
