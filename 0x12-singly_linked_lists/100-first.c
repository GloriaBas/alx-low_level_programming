#include <stdio.h>
#include <stdlib.h>

/**
 * before_main - Print words before the main function
 * Return: always 0
 */
void before_main(void) __attribute__((constructor));

void before_main(void)

{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
