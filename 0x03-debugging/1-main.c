#include <stdio.h>

/**
 * main - demonstrates avoiding an infinite loop
 * Return: Always 0
 */
int main(void)
{
    printf("Infinite loop incoming :(\n");

    /* 
     * This loop was causing an infinite loop because putchar(i); 
     * was printing integer values, not characters. Corrected it
     * to print characters representing numbers 0 to 9.
     */
    /*
     * int i = 0;
     * while (i < 10)
     * {
     *     putchar(i + '0');
     *     i++;
     * }
     */

    printf("Infinite loop avoided! \\o/\n");

    return (0);
}

