#include "main.h"
/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: Buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Description: This function adds two numbers represented as strings ('n1' and 'n2')
 * and stores the result in the 'r' buffer, which should have a size of 'size_r'.
 *
 * Return: Pointer to the result in 'r', or NULL if there is an error.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    char tmp[10000];
    int rl, i, l1, l2, sum, num1, num2, carry;
    rl = i = l1 = l2 = sum = num1 = num2 = carry = 0;

    while (n1[l1] != '\0')
        l1++;
    while (n2[l2] != '\0')
        l2++;

    if (l1 + 2 > size_r || l2 + 2 > size_r)
        return (0);

    l1--;
    l2--;

    while (i <= l1 || i <= l2)
    {
        num1 = num2 = 0;
        if (i <= l1)
            num1 = n1[l1 - i] - '0';
        if (i <= l2 && (l2 - i) >= 0)
            num2 = n2[l2 - i] - '0';

        sum = num1 + num2 + carry;
        if (sum >= 10)
        {
            carry = 1;
            sum -= 10;
        }
        else
            carry = 0;

        r[i] = sum + '0';
        i++;
        rl++;
    }

    if (carry > 0)
    {
        r[i] = carry + '0';
        r[i + 1] = '\0';
    }

    i = 0;
    int tmpl = 0;
    while (i <= rl)
    {
        tmp[i] = r[rl - i];
        tmpl++;
        i++;
    }

    i = 0;
    while (i < tmpl)
    {
        if (r[i] == '\0')
        {
            break;
        }
        r[i] = tmp[i];
        i++;
    }

    return (r);
}
