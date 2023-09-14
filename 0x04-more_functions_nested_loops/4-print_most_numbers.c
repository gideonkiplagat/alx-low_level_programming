#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9.
 *
 * Description: prints the numbers excluding 2 and 4.
 *
 * Return: The numbers since 0 up to 9.
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
		}
	}

	_putchar('\n');
}
