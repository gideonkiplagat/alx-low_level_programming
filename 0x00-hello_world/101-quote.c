#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Do not use printf and puts
 * Return: Always 1 (pass)
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
