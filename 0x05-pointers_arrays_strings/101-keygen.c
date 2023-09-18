#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - Generates random valid passwords
 *
 * Return: Always 0
 */

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int index = 0, sum = 0, diff_half1, diff_half2;

    srand(time(0));

    password[0] = rand() % 26 + 'A';
    password[1] = rand() % 26 + 'a';
    password[2] = rand() % 10 + '0';

    index = 3;

    while (sum < 2772)
    {
        password[index] = rand() % 94 + '!';
        sum += password[index];
        index++;
    }

    diff_half1 = (sum - 2772) / 2;
    diff_half2 = (sum - 2772) / 2;

    for (index = 0; index < 3 + diff_half1; index++)
    {
        if (password[index] - diff_half1 >= '!')
        {
            password[index] -= diff_half1;
        }
        else
        {
            password[index] = '!';
        }
    }

    for (index = 3 + diff_half1; index < PASSWORD_LENGTH; index++)
    {
        if (password[index] - diff_half2 >= '!')
        {
            password[index] -= diff_half2;
        }
        else
        {
            password[index] = '!';
        }
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("%s\n", password);

    return 0;
}
