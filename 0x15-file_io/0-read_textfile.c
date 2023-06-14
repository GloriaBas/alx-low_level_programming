#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads text file print to the STDOUT
 * @filename: the file name
 * @letters: Numbers of letters printed
 * Return: letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd;
	ssize_t w;
	ssize_t t;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));

	if (!buff)
		return (0);

	t = read(fd, buff, letters);

	w = write(STDOUT_FILENO, buff, t);

	close(fd);

	free(buff);

	return (w);
}


