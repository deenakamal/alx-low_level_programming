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
	int i = 0;
	char *p;

	if (argc == 1)
	{
		return (0);
	}

	while (i < argc)
	{
		i++;
		for (p = argv[i]; *p; p++)
		{
			if (*p < '0' || *p > '9')
			{
				printf("Error\n");
				return (1);
			}

			result += atoi(p);
		}
	
	}
	printf("%d\n", result);
	return (0);
}
