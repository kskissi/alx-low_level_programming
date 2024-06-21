#include <stdio.h>

/**
 * main - Program that prints the digits from 0 to 9
 *
 * Return: Always 0
 */
int main(void)
{
    char digit;

    for (digit = '0'; digit <= '9'; digit++)
    {
        putchar(digit);
    }

    putchar('\n');

    return (0);
}
