#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number to generate the times table for.
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, result;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;

				if (j == 0)
				{
					printf("%d", result);
				}
				else
				{
					printf(", ");

					if (result < 10)
						printf("  "); // Double space for single-digit numbers
					else if (result < 100)
						printf(" ");  // Single space for double-digit numbers

					printf("%d", result);
				}
			}
			printf("\n");
		}
	}
}

