#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - A function that prints all natural numbers
 * from n to 98, followed by a new line.
 * @n: parameter
 * Return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(",");
			}
			else
			{
				break;
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			
			if (n != 98)
			{
				printf(",");
			}
			else
			{
				break;
			}
		}
	}
	printf("\n");
}
