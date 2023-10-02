#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + j;
	concatenated = malloc((sizeof(char) * l) + 1);

	if (concatenated == NULL)
		return (NULL);

	j = 0;

	while (k < l)
	{
		if (k <= i)
			concatenated[k] = s1[k];

		if (k >= i)
		{
			concatenated[k] = s2[j];
			j++;
		}

		k++;
	}

	concatenated[k] = '\0';
	return (concatenated);
}
