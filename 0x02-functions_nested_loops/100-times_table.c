#include <stdio.h>

/**
 * main - print 50 fibonacci numbers
 * starting with 1 and 2.
 * Return: 0
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	int i;
	long int n;

	printf("%lu, %lu, ", a, b);
	for (i = 3; i <= 50; i++)
	{
		n = a + b;
		if (i == 50)
		{
			printf("%lu\n", n);
		}
		else
		{
			printf("%lu, ", n);
		}
		a = b;
		b = n;
	}
	return (0);
}
