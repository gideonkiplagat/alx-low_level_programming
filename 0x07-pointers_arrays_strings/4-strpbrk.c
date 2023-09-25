#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: The source string.
 * @accept: The accepted characters to search for.
 *
 * Return: A pointer to the first occurrence in the string s of any of the
 *         bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
    int i = 0, j;

    while (s[i])
    {
        j = 0;

        while (accept[j])
        {
            if (s[i] == accept[j])
            {
                s += i;
                return (s);
            }

            j++;
        }

        i++;
    }

    return ('\0');
}
