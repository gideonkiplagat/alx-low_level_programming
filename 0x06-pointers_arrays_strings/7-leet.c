#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to encode.
 *
 * Return: The encoded string.
 */
char *leet(char *s)
{
	int i = 0, j = 0, num_replacements = 5;
	char replacements[5] = {'A', 'E', 'O', 'T', 'L'};
	char leet_chars[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		j = 0;

		while (j < num_replacements)
		{
			if (s[i] == replacements[j] || s[i] - 32 == replacements[j])
			{
				s[i] = leet_chars[j];
			}

			j++;
		}

		i++;
	}

	return (s);
}
