#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a = 0, b = 1, f = 0, c = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", b, c);
	for (count = 2; count < 98; count++)
	{
		if (b + c > LARGEST || f > 0 || a > 0)
		{
			hold1 = (b + c) / LARGEST;
			hold2 = (b + c) % LARGEST;
			hold3 = a + f + hold1;
			a = f, f = hold3;
			b = c, c = hold2;
			printf("%lu%010lu", f, bk2);
		}
		else
		{
			hold2 = b + c;
			b = c, c = hold2;
			printf("%lu", c);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
