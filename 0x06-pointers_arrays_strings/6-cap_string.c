#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - A function that capitalizes all words of a string.
 * @str: string
 * Return: char
 */

char *cap_string(char *str)
{
	int i;
	int j;
	char sep[] = ",;.!?(){}\n\t\" ";
	str[0] = toupper(str[0]);

	for (i = 1; i <= strlen(str); i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == sep[i])
			{
				str[i] = toupper(str[i]);
			}
		}
	}
	return (str);
}
