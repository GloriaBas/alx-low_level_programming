#include "main.h"

/**
 * _pow_recursion - A function that returns the value of x raised
 * to the power of y.
 * @x: base
 * @y: power
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * x * _pow_recursion(x, y - 2));
	}
}
