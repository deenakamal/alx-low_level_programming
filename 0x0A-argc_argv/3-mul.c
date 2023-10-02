#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Write a program that multiplies two numbers.
 * @argc: input number
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result, f_num, s_num;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	f_num = atoi(argv[1]);
	s_num = atoi(argv[2]);
	result = f_num * s_num;

	printf("%d\n", result);
	return (0);
}
