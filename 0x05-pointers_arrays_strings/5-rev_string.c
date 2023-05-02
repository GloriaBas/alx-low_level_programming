#include "main.h"
#include <string.h>

/**
 * rev_string - A function that reverses a sting.
 * @s: parameter
 * Return: nothing
 */

void rev_string(char *s)
{
	int i;
	int j;
	char rev;

	i = 0;
	j = strlen(s) - 1;
	while (i < j)
	{
		rev = s[i];
		s[i] = s[j];
		s[j] = rev;
		i++;
		j--;
	}

}
