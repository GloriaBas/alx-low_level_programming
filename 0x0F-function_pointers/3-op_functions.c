#include "3-calc.h"

/**
 * op_mul - calculates product
 * @a: first number
 * @b: second number
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_sub - Calculates difference
 * @a: first number
 * @b: second number
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_add - Calculates sum
 * @a: first number
 * @b: second number
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_mod - Calculates modulus
 * @a: first number
 * @b: second number
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}


/**
 * op_div - Calculates division
 * @a: first number
 * @b: second number
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
