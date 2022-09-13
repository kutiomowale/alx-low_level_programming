#include "main.h"

/**
 * print_alphabet - This function prints
 * the alphabet, in lowercase,
 * followed by a new line
 */

void print_alphabet(void)
{
	char ch[] = "abcdefghijklmnopqrstuvwxyz";
	int n;

	for (n = 0; n < 26; n++)
	{
		_putchar(ch[n]);
	}

	_putchar('\n');

}
