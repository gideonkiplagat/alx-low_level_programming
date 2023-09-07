#include <unistd.h>
/**
 * main as the entry point
 * should not use printf, man , puts
 */

int main(void)
{
    write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    return 1;
}

