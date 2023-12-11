#include "main.h"

/**
 * _isdigit - Checks if a character is a digit (0 through 9).
 * @c: The character to be checked (in ASCII representation).
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1); /* c is a digit */

	return (0); /* c is not a digit */
}
