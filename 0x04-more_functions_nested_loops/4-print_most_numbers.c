#include "main.h"

/**
 * print_most_numbers - prints the numbers, 0 to 9
 * except 2 and 4
 * followed by a new line
 */

void print_most_numbers(void)
{
	int i;

	i = 48;

	while (i <= 57)
	{
		if (i != 50 && i != 52)
			_putchar(i);
		i++;
	}

	_putchar('\n');
}
