#include "main.h"

/**
 * _strspn - Search a string for a set of bytes.
 * @s: The source string to search.
 * @accept: The accepted string containing characters to match.
 *
 * Return: The number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int x = 0, y, z = 0;

    while (accept[x])
    {
        y = 0;

        while (s[y] != ' ')
        {
            if (accept[x] == s[y])
            {
                z++;
            }

            y++;
        }

        x++;
    }

    return (z);
}
