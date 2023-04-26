#include <stdio.h>

/**
 * main - print natural numbers
 * Return: 0
 */

int main(void)
{
	int i;
	int n = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			n = n + i;
		}
		else
		{
			continue;
		}
	}
	printf("%d\n", n);
	return (0);
