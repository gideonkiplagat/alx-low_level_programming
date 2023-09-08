#include <stdio.h>

/**
  * main - Prints a hexadecimal string
  *
  * Return: Always (Success)
  */
int main() {
    for (int i = 0; i < 16; i++) {
        if (i < 10) {
            putchar('0' + i); // Print the digits 0-9
        } else {
            putchar('a' + i - 10); // Print the lowercase letters a-f
        }
    }
    
    putchar('\n'); // Print a new line
    
    return (0);
}
