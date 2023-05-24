#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the
 * operation asked by the user.
 * @s: operator
 * Return: returns a pointer that corresponds to the operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"*", op_mul},
		{"/", op_div},
		{"-", op_sub},
		{"%", op_mod},
		{NULL, NULL}
	};
	int k = 0;

	while (ops[k].op)
	{
		if (strcmp(ops[k].op, s) == 0)
			return (ops[k].f);
		k++;
	}

	return (NULL);
}
