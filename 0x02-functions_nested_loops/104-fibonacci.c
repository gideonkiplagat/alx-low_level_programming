#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a = 1, b = 2, next_term = 0, sum = 0;

	printf("%lu", a);

	while (next_term < 4000000)
	{
		if (next_term % 2 == 0)
		{
			sum += next_term;
		}

		printf(", %lu", next_term);
		a = b;
		b = next_term;
		next_term = a + b;
	}

	printf("\nSum of even-valued terms: %lu\n", sum);

	return (0);
}
