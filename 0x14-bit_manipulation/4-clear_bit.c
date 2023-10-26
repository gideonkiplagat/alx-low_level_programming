#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * clear_bit - clear the value of a bit to 1 at a given index.
 * Prototype: int set_bit(unsigned long int *n, unsigned int index);
 * @index: The index of the bit to clear (starting from 0)
 * @n: A pointer to the unsigned long integer to modify.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)

{
	int add;

	if (index >= 64)
		return (-1);
	add = 1 << index;
	*n = *n & (~add);
	return (1);
}
