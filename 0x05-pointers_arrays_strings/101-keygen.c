#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Generates random passwords for 101-crackme
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
    int sum;
    char c;
    srand(time(NULL));
    sum = 0;

    while (sum <= 2645)
    {
        c = rand() % 95 + 32;  // Generate printable ASCII characters
        sum += c;
        putchar(c);
    }

    putchar(2772 - sum);

    return (0);
}
