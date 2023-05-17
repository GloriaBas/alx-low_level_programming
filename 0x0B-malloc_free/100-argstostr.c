#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * argstostr - A function that concatenates all the arguments of your program
 * @ac: number of argument
 * @av: array of argument
 * Return: pointer to a new string or NULL
 */

char *argstostr(int ac, char **av)
{
	int x;
	int y;
	int lenght;
	char *str_ptr;
	char *word;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (x = 0, lenght = 0; x < ac; x++)
	{
		for (y = 0; *(*(av + x) + y) != '\0'; y++, lenght++)
			;
		lenght++;
	}
	lenght++;

	str_ptr = malloc(sizeof(char) * lenght);
	if (str_ptr == NULL)
		return (NULL);

	word = str_ptr;

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			*str_ptr = av[x][y];
			str_ptr++;
		}
		*str_ptr = '\n';
		str_ptr++;
	}

	return (word);
}
