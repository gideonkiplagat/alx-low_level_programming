#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **words;
	int i;
	int j = 0;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] != 32)
			count++;
	}

	words = malloc(sizeof(char) * count);

	if (words == NULL)
		return (NULL);

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] != 32)
		{
			*words[j] = str[i];
			j++;
		}
		else
		{
		}
	}
	return (words);
}
