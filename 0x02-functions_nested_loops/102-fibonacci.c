#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int fib1 = 1, fib2 = 2, next;
	int count;

	printf("%ld, %ld, ", fib1, fib2);

	for (count = 3; count <= 50; count++)
	{
		next = fib1 + fib2;
		printf("%ld", next);

		if (count < 50)
			printf(", ");
		else
			printf("\n");

		fib1 = fib2;
		fib2 = next;
	}

	return (0);
}
