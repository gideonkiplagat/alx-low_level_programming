#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9, followed by a newline.
 *
 * Return: void
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
	}

	_putchar('\n');
}
