#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
static int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
		i++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int i = 0, j = 0, k, word_count = count_words(str);
	char **words;

	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	while (str[i])
	{
		if (str[i] != ' ')
		{
			k = 0;
			while (str[i] && str[i] != ' ')
			{
				i++;
				k++;
			}
			words[j] = (char *)malloc((k + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				for (j = 0; j <= word_count; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			for (k = 0; str[i - k - 1] != ' ' && k < j; k++)
				words[j][k] = str[i - k - 1];
			words[j][k] = '\0';
			j++;
		}
		else
			i++;
	}
	words[j] = NULL;
	return (words);
}

