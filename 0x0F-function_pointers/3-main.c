#include "3-calc.h"

/**
 * main - main function
 * @argc: the number of arguments
 * @argv: argument vectot
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;
	int k;
	int (*operand)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	operand = get_op_func(argv[2]);

	if (operand == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", operand(j, k));
	return (0);
}

