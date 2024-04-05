#include <stdio.h>
/**
 * same using loops to gain the previous
 * characters
 *
 * return 0 on success
 */

int main() 
{
    char lowercase = 'a';
    char uppercase = 'A';

    while (lowercase <= 'z') {
        putchar(lowercase);
        lowercase++;
    }

    while (uppercase <= 'Z') {
        putchar(uppercase);
        uppercase++;
    }

    putchar('\n');

    return 0;
}

