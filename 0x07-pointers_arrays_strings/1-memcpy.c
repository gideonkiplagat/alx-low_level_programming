#include "main.h"

/**
 * _strchr - Locate character in a string.
 * @s: The string to search.
 * @c: The character to find.
 *
 * Return: A pointer to the string found.
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
