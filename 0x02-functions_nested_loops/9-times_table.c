#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0'); /* Print the first digit */

		for (j = 1; j <= 9; j++)
		{
			_putchar(','); /* Print the comma */

			/* Calculate the result and print it */
			result = i * j;

			if (result <= 9)
				_putchar(' ');

			_putchar('0' + result);
		}

		_putchar('\n');
	}
}
