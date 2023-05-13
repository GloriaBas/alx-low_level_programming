#include <stdlib.h>
#include <stdio.h>

/**
 * main - A program that adds positive numbers
 * @argc: number of argument
 * @argv: argument vector
 * Return: 0 or Error followed by a new line, then 1
 */

int main(int argc, char *argv[])
{
	int x;
	int y;
	int z;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y]; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		z += atoi(argv[x]);

	}
	printf("%d\n", z);
	return (0);
}

