#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int fib1 = 1, fib2 = 2, next, sum = 0;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
		{
			sum += fib1;
		}

		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
	}

	printf("%ld\n", sum);
	return (0);
}
