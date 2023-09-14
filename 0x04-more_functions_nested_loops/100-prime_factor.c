#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds largest prime factor of a number.
 * @n: The number to find the largest prime factor for.
 *
 * Return: Always 0(success).
 */
long largest_prime_factor(long n)
{
    long largest = -1;
    while (n % 2 == 0)
    {
        largest = 2;
        n /= 2;
    }

    for (long i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            largest = i;
            n /= i;
        }
    }

    if (n > 2)
        largest = n;

    return largest;
}

int main(void)
{
    long n = 612852475143;
    long result = largest_prime_factor(n);

    printf("%ld\n", result);

    return (0);
}
