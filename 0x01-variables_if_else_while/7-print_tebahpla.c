#include <stdio.h>

/**
  * main - Prints the alphabet at reverse
  * only use putchar function
  *
  * Return: Always (pass)
  */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
