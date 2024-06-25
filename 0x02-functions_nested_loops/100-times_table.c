#include "main.h"

/**
 * print_times_table - Prints the times table of the input, starting with 0.
 * @n: The value of the times table to be printed (0 <= n <= 15).
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int num, mult, prod;

	for (num = 0; num <= n; num++)
	{
		_putchar('0');
		for (mult = 1; mult <= n; mult++)
		{
			prod = num * mult;
			print_number(prod, mult, n);
		}
		_putchar('\n');
	}
}

/**
 * print_number - Helper function to print a formatted number.
 * @prod: The product to be printed.
 * @mult: The multiplier value.
 * @max: The maximum value of n for formatting purposes.
 */
void print_number(int prod, int mult, int max)
{
	_putchar(',');
	_putchar(' ');

	if (prod <= 9)
	{
		_putchar(' ');
		_putchar(' ');
	}
	else if (prod <= 99)
	{
		_putchar(' ');
	}

	if (prod >= 100)
	{
		_putchar((prod / 100) + '0');
		_putchar(((prod / 10) % 10) + '0');
	}
	else if (prod >= 10 || mult == 1)
	{
		_putchar(' ');
	}

	_putchar((prod % 10) + '0');
}

