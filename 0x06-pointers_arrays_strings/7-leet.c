#include "main.h"

/**
 * leet - A function that encodes a string into 1337
 * @src: string
 * Return: string
 */

char *leet(char *src)
{
	int i;
	int j;
	char *old = "aAeEoOtTIL";
	char *new = "4433007711";

	for (i = 0; src[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (src[i] == old[j])
			{
				src[i] = new[j];
			}
		}
	}
	return (src);
}
