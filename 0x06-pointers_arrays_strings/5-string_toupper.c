#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 97 && str[index] <= 122)
		{
			str[index] -= 32;
		}

		index++;
	}

	return (str);
}
