#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes the first letter.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int index = 0, i;
	int num_separators = 13;
	char separators[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (str[index])
	{
		i = 0;

		while (i < num_separators)
		{
			if ((index == 0 || str[index - 1] == separators[i]) && (str[index] >= 'a' && str[index] <= 'z'))
				str[index] -= 32;

			i++;
		}

		index++;
	}

	return (str);
}
