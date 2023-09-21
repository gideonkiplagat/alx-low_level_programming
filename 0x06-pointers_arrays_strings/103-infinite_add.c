#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, temp_len, result_len = 0, i, digit_sum, num1, num2, carry = 0;
	char temp[10000];

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	if (len1 + 2 > size_r || len2 + 2 > size_r)
		return (0);

	len1--;
	len2--;

	i = 0;

	while (i <= len1 || i <= len2)
	{
		num1 = (i <= len1) ? (n1[len1 - i] - '0') : 0;
		num2 = (i <= len2) ? (n2[len2 - i] - '0') : 0;

		digit_sum = num1 + num2 + carry;

		if (digit_sum >= 10)
		{
			carry = 1;
			digit_sum -= 10;
		}
		else
			carry = 0;

		r[i] = digit_sum + '0';
		i++;
		result_len++;
	}

	if (carry > 0)
	{
		r[i] = carry + '0';
		r[i + 1] = '\0';
	}

	i = temp_len = 0;

	while (i <= result_len)
	{
		temp[i] = r[result_len - i];
		temp_len++;
		i++;
	}

	i = 0;

	while (i < temp_len)
	{
		if (r[i] == '\0')
		{
			break;
		}
		r[i] = temp[i];
		i++;
	}

	return (r);
}
