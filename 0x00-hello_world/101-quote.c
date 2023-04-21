#include <stdio.h>
#include <unistd.h>
/**
 * main - Print to standart error
 * Return: 1
 */
int main(void)
{
	char q[] = "and that piece of art is useful\ -Dora Korpar, 2015-10-19\n";
	wwrit(2, q, 59);
	return (1);
}
