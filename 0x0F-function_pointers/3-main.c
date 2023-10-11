#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - main for print the result of operations
 *
 * @argc: the number of arguments
 * @argv: array of opinters to arguments
 *
 * Return: Alwayes 0
 */
int main(int argc, char *argv[])
{
	int f_num, s_num;

	char *p;

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}

	f_num = atoi(argv[1]);
	s_num = atoi(argv[3]);

	p = argv[2];

	if (get_op_func(p) == NULL || p[1] != '\0')
		printf("Error\n"), exit(99);

	/* if the user tries to divide (/ or %) by 0, print Error,*/
	/* followed by a new line, and exit with the status 100*/

	if ((*p == '/' && s_num == 0) || (*p == '%' && s_num == 0))
		printf("Error\n"), exit(100);

	printf("%d\n", get_op_func(p)(f_num, s_num));

	return (0);
}

