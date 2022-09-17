#include "main.h"

/**
 * print_square - uses the character # to
 * print a square
 * followed by a new line
 * @size: is the size of the square
 * prints only a newline if size is zero or less
 */

void print_square(int size)
{
	int i = 1;
	int j;

	if (size > 0)
	{
		while (i <= size)
		{
			j = 1;

			while (j <= size)
			{
				_putchar('#');
				j++;
			}

			_putchar('\n');
			i++;
		}
	}

	else
	{
		_putchar('\n');
	}
}
