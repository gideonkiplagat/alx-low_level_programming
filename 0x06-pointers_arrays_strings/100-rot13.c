#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
    int index = 0;

    while (str[index])
    {
        while ((str[index] >= 'a' && str[index] <= 'z') || (str[index] >= 'A' && str[index] <= 'Z'))
        {
            if ((str[index] > 'm' && str[index] <= 'z') || (str[index] > 'M' && str[index] <= 'Z'))
            {
                str[index] -= 13;
                break;
            }

            str[index] += 13;
            break;
        }

        index++;
    }

    return (str);
}

