#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string.
 * @str: input string
 * Return: string
 */

char *cap_string(char *str)
{
	int i;
	int j;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;

	if (*(str + i) > 96 && *(str + i) < 123)
		*(str + i) = *(str + i) - 32;
	i++;
	while (*(str + i) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (*(str + i) == sep[j])
			{
				if ((*(str + (i + 1)) > 96) && (*(str + (i + 1)) < 123))
					*(str + (i + 1)) = *(str + (i + 1)) - 32;
				break;
			}
		}
		i++;
	}
	return (str);
}
