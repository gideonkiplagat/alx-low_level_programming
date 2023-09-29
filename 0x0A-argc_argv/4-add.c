#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - Prints the sum the positive numbers
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Void.
  */
int main(int argc, char *argv[])
{
	int i;
	unsigned int k, sum = 0;
	char *currentArg;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			currentArg = argv[i];

			for (k = 0; k < strlen(currentArg); k++)
			{
				if (currentArg[k] < 48 || currentArg[k] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(currentArg);
			currentArg++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
