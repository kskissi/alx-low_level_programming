#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Description:
 * This function prints all lowercase letters from 'a' to 'z' followed by a newline,
 * and it repeats this process 10 times.
 *
 * Return: void (no return value)
 */
void print_alphabet_x10(void)
{
    char c;
    int i = 0;

    while (i <= 9)
    {
        for (c = 'a'; c <= 'z'; c++)
        {
            _putchar(c);
        }
        _putchar('\n');
        i++;
    }
}

