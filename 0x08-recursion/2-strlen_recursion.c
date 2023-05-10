#include "main.h"

/**
 * _strlen_recursion - A function that returns the lenght of a string.
 * @s: parameter
 * Return: lenght of the string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count = 1 + _strlen_recursion(s + 1);
	}
	else
	{
		count = 0;
	}
	return (count);
}
