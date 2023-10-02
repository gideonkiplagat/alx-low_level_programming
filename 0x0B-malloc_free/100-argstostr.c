#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * argstostr - Concatenates all arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector (an array of strings).
 *
 * Return: A pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
	int ch = 0, i = 0, j = 0, k = 0;
	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			ch++;
			j++;
		}

		j = 0;
		i++;
	}

	concatenated = malloc((sizeof(char) * ch) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			concatenated[k] = av[i][j];
			k++;
			j++;
		}

		concatenated[k] = '\n';

		j = 0;
		k++;
		i++;
	}

	k++;
	concatenated[k] = '\0';
	return (concatenated);
}
