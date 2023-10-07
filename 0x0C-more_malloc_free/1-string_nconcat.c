#include "main.h"
/**
 * *string_nconcat - used function to concat two strings
 * @s1: first string
 * @s2: second string
 * @n: number bytes of s2
 *
 * Return: return pointer to newly allocated space in th memory
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	char *new_c;
	unsigned int len_str1 = 0;
	unsigned int len_str2 = 0;

	/* first check if NULL Passed treat string as empty*/
	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	/* find the length of s1 */
	while (s1[len_str1])
	{
		len_str1++;
	}
	while (s2[len_str2])
	{
		len_str2++;
	}
	/* if n is greater or equal the length s2 use the entire string s2 */

	if (n >= len_str2)
		n = len_str2;
	/* then we have to allocate memory for new allocated memory */
	new_c = malloc(sizeof(char) * (len_str1 + n + 1));
	/* check if memory allocated successfuly */
	if (new_c == NULL)
	{
		return (NULL);
	}
	/* copy first s1 into new_c */
	for (i = 0; s1[i] != '\0'; i++)
		new_c[i] = s1[i];
	for (i = 0; i < n; i++)
		new_c[len_str1 + i] = s2[i];
	new_c[len_str1 + n] = '\0';
	return (new_c);
}
