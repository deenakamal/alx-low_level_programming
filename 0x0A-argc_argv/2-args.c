#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints all arguments it receives.
 * @argc: input number
 * @argv: array
 * Return: 0
 */
int main(int argc, char **argv)
{
	int iteration;

	for (iteration = 0; iteration < argc; iteration++)
		printf("%s\n", argv[iteration]);
	return (0);
}
