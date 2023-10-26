#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * Prototype: unsigned int binary_to_uint(const char *b);
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int result;

	if (b == NULL)
		return (0);

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] == '0')
		{
			result = (result << 1);
		} else if (b[j] == '1')
		{
			result = (result << 1) | 1;
		} else
		{
			return (0);
		}
	}
	return (result);
}
