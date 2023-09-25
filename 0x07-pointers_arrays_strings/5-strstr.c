#include "main.h"

/**
 * _strstr - Locate a substring.
 * @haystack: The string to search.
 * @needle: The string to find.
 *
 * Return: A pointer to the first occurrence of the substring.
 */
char *_strstr(char *haystack, char *needle)
{
    int x = 0, y = 0;

    while (haystack[x])
    {
        while (needle[y])
        {
            if (haystack[x + y] != needle[y])
            {
                break;
            }

            y++;
        }

        if (needle[y] == '\0')
        {
            return (haystack + x);
        }

        x++;
    }

    return ('\0');
}
