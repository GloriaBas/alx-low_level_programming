#include <stdio.h>

/**
 * main - Print all single digit
 * with putchar function
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
