#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s)
	{
		if (*s == 45)
		{
			sign = -sign;
		}
		else if (*s >= 48 && *s <= 57)
		{
			result = result * 10 + (*s - 48);
		}
		else if (result != 0)
		{
			break;
		}
		s++;
	}

	return result * sign;
}
