#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, next;
	int count;

	printf("%lu, %lu, ", fib1, fib2);

	for (count = 3; count <= 98; count++)
	{
		next = fib1 + fib2;
		printf("%lu", next);

		if (count < 98)
			printf(", ");
		else
			printf("\n");

		fib1 = fib2;
		fib2 = next;
	}

	return (0);
}
