#include <stdio.h>

/**
 * main - A program that prints the number of arguments passed into it.
 * @argv: argument vector
 * @argc: number of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	//ignore argv
	
	printf("%d\n", argc - 1);

	return (0);
}
