#include "main.h"

/**
 *_sqrt_recursion - A function that returns natural
 * square root of a number
 *@n: number
 *Return: square root
 */

int _sqrt_recursion(int n)
{
	int another_sqrt(int n, int x);

	int x = 1;

	return (another_sqrt(n, x));
}

/**
 * another_sqrt - Another function to solve first function
 * @x: number to check
 * @n: parameter from first function
 * Return: Square root
 */

int another_sqrt(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x < n)
	{
		return (another_sqrt(n, x + 1));
	}
	else
	{
		return (-1);
	}
}
