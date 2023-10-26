#include <stdio.h>
#include "main.h"

/**
 * flip_bits -Returns the number of bits needed to flip to transform n to m.
 * Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits to flip or -1 if an error occurs.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned int flip = 0, comp, comp1;

	while (!(n == 0 && m == 0))
	{
		comp = n & 1;
		comp1 = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (comp != comp1)
			flip += 1;
	}
	return (flip);
}
