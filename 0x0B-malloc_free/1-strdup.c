#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	duplicate = malloc((sizeof(char) * i) + 1);

	if (duplicate == NULL)
		return (NULL);

	while (a < i)
	{
		duplicate[a] = str[a];
		a++;
	}

	duplicate[a] = '\0';
	return (duplicate);
}
