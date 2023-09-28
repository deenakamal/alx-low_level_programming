#include "main.h"

int findStringLen(char *str);
int checkerPalindrome(char *str, int strLen, int loop_i);

/**
 * is_palindrome - a function that returns 1 if plin or 0 if not
 *
 * @s: string input
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (checkerPalindrome(s, findStringLen(s), 0));
}

/**
 * findStringLen - find the length of string
 * @str: string input
 * Return: length of input string
 */
int findStringLen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + findStringLen(str + 1));
}

/**
 * checkerPalindrome - a function to check if string plindrome
 * @str: string input
 * @strLen: length
 * @loop_i: loop index
 * Return: 1 or 0
 */
int checkerPalindrome(char *str, int strLen, int loop_i)
{
	if (*(str + loop_i) != *(str + strLen - 1))
		return (0);
	if (loop_i >= strLen)
		return (1);
	return (checkerPalindrome(str, strLen - 1, loop_i + 1));
}
