#include <stdio.h>

/**
  * main - Prints the numbers since 0 to 9
  * Do not use char as a variable
  *use putchar as a function
  *
  * Return: Always (Success)
  */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
