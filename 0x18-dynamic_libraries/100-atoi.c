#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @str: The string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *str)
{
	int index = 0;
	unsigned int num = 0;
	int sign = 1;
	int digit_seen = 0;

	while (str[index])
	{
		if (str[index] == 45)
		{
			sign *= -1;
		}

		while (str[index] >= 48 && str[index] <= 57)
		{
			digit_seen = 1;
			num = (num * 10) + (str[index] - '0');
			index++;
		}

		if (digit_seen == 1)
		{
			break;
		}

		index++;
	}

	num *= sign;
	return (num);
}
