#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * error_file - Checks if a file has error
 * @file_from: file_from.
 * @file_to: file_to
 * @argv: An array of the pointers to the arguments
 * Return: no return
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to file %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments supplied to the program
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char buffer[1024];
	ssize_t nchars;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(from, to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(from, buffer, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		w = write(from, buffer, nchars);
		if (w == -1)
			error_file(0, -1, argv);
	}

	r = close(from);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}

	r = close(to);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	return (0);
}

