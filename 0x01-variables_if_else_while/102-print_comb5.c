#include <stdio.h>

/**
 * main - Write a program that
 * prints all possible combinations
 * of two two-digit numbers.
 * Return: 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(32);
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);
			if ((i == 98) && (j == 99))
				continue;
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
