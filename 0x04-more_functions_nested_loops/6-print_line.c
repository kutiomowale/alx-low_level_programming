#include "main.h"

/**
 * print_line - draws a straight line on the terminal
 * followed by a new line
 * @n: number of times the character _ should be printed
 * prints only a newline if n is zero or less
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}

	_putchar('\n');
}
