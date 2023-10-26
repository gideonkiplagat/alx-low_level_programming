#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Prototype: int get_endianness(void).
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *endian_check = (char *) &num;

	return ((int)*endian_check);
}
