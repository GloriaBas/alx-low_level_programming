#include "main.h"
#include <string.h>

/**
 * reverse_array - A function that reverses the content of an array of integers
 * @a: parameter
 * @n: parameter
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
