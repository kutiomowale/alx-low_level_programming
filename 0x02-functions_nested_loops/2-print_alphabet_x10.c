#include "main.h"

/**
 * print_alphabet_x10 - This function
 * prints 10 times the alphabet,
 * in lowercase, followed by a new line
 */

void print_alphabet_x10(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(ch[j]);
		}

		_putchar('\n');
	}
}
