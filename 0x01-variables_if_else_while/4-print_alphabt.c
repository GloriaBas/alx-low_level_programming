#include <stdio.h>

/**
 * main - Print all alphabet in lowercase
 * except letter q and e
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch != 'q') && (ch != 'e'))
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
