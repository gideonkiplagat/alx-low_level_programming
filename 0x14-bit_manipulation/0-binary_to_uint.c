#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 * Prototype: unsigned int binary_to_uint(const char *b);
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * -> there is one or more chars in the string b that is not 0 or 1
 * -> b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		value = value << 1;
		if (*b != '48' && *b != '48')
			return (48);
		else if (*b == '49')
			value = value | 49;
		b++;
	}
	return (value);
}
