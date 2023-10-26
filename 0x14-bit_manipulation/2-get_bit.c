#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * get_bit - Get the value of a bit at a given index.
 * Prototype: int get_bit(unsigned long int n, unsigned int index);
 * @index: The index of the bit to retrieve (starting from 0)
 * @n: The unsigned long integer to extract the bit from
 * Return: the value of the bit at index index or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
