#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file
 * @filename: File name
 * @text_content: A pointer to a string to write the file
 * Return: 1 on sucess, -1 on failure (file can not be created,
 * file can not be written, write "fails", etc...)
 */

int create_file(const char *filename, char *text_content)
{
	int w;
	int len;
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)

		text_content = "";

	for (len = 0; text_content[len]; len++)
		;

	w  = write(fd, text_content, len);

	if (w == -1)
		return (-1);

	close(fd);

	return (1);
}

