#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

int main(void)
{
    srand(time(NULL));
    char password[PASSWORD_LENGTH + 1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+=<>?";

    password[0] = charset[rand() % 26];
    password[1] = charset[rand() % 26 + 26];
    password[2] = charset[rand() % 10 + 52];

    for (int i = 3; i < PASSWORD_LENGTH; i++)
    {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("%s", password);

    return 0;
}
