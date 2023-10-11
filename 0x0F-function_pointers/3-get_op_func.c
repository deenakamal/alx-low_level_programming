#include "3-calc.h"

/**
 * get_op_func - select the function to perform the operstion
 *
 * @s: The operator that selected
 *
 * Return: pointer to correct function based on
 * the operator that given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}

	return (ops[i].f);
}
