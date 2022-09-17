#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * from 0 to 14 followed by a new line
 */

void more_numbers(void)
{
	char ch[] = "01234567891011121314";

	int i;
	int j;

	i = 1;

	while (i <= 10)
	{
		j = 0;

		while (j <= 19)
		{
			_putchar(ch[j]);
			j++;
		}

		_putchar('\n');
		i++;
	}
}
