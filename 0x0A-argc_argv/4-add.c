#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Write a program that adds positive numbers.
 *
 * @argc: input number
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result = 0;
	char *p;

	while (--argc)
		for (p = argv[argc]; *p; p++)
		{
			if (!isdigit(argv[argc]))
			{
				printf("Error\n");
				return (1);
			}
			result += atoi(argv[argc]);
		}
	printf("%d\n", result);
	return (0);
}
