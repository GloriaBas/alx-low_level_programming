#include "main.h"

/**
 * _strstr - A function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1;
	char *p2;

	while (*haystack != '\0')
	{
		p1 = haystack;
		p2 = needle;

		while (*haystack != '\0' && *p2 != '\0' && *haystack == *p2)
		{
			haystack++;
			p2++;
		}
		if (!*p2)
		{
			return (p1);
		}
		haystack = p1 + 1;
	}
	return (0);
}
