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
	char *words = NULL;
	unsigned int i = 0, j = 0, k;

	if (strncmp(str, "", 1) || str == NULL)
		return (NULL);
	words = malloc((i + j + 1) * sizeof(char));
	if (words == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		words[k] = str[k];
	i = k;
	for (k = 0; k < j; k++)
	{
		words[i] = str[k];
		i++;
	}
	words[i] = '\0';
	return (NULL);
}
