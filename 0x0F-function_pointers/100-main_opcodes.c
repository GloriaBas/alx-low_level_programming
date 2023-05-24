#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own function
 * @argc: number of argument
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int k;
	int bytes;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;

	for (k = 0; k < bytes; k++)
	{
		if (k == bytes - 1)
		{
			printf("%02hhx\n", ptr[k]);
			break;
		}
		printf("%02hhx", ptr[k]);
	}
	return (0);
}
