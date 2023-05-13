#include <stdlib.h>
#include <stdio.h>

/**
 * main - A program that multiples two numbers
 * @argc: number of argument
 * @argv: argument vector
 * Return: 0 or Error, followed by a new line and then 1
 */

int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = x * y;

	printf("%d\n", z);
	return (0);
}
