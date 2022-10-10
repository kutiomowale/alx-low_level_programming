#include "main.h"
/**
 * print_times_table - a function that prints the n times table,
 * starting with 0
 * If n is greater than 15 or less than 0,
 * the function should not print anything
 *
 * @n: the times table to print
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		_putchar('0');

		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');

			product = i * j;

			if (product < 100)
				_putchar(' ');
			if (product < 10)
				_putchar(' ');

			if (product > 9)
			{
				if (product > 99)
				{
					_putchar((product / 100) + '0');	/* prints the left most number */
					_putchar(((product / 10) % 10) + '0');	/* prints the middle number */
				}
				else
				{
					_putchar((product / 10) + '0');		/* prints the left most number */
				}
			}
			_putchar((product % 10) + '0');				/* prints the right most number */
		}
		_putchar('\n');
	}
}

