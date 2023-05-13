#include <stdio.h>

/**
 * main - A program that prints all arguments it receives.
 * @argc: number of argument
 * @argv: argument vector
 * return: Always 0(success)
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
