#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 *
 * Return: 
 *   - 0 if the strings are equal.
 *   - A negative integer if s1 is less than s2.
 *   - A positive integer if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0, y = 0, z = 0, result = 0, limit;

	while (s1[x])
	{
		x++;
	}

	while (s2[y])
	{
		y++;
	}

	if (x <= y)
	{
		limit = x;
	}
	else
	{
		limit = y;
	}

	while (z <= limit)
	{
		if (s1[z] == s2[z])
		{
			z++;
			continue;
		}
		else
		{
			result = s1[z] - s2[z];
			break;
		}

		z++;
	}

	return (result);
}
