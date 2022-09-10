#include <stdio.h>

/**
 * main - Entry point
 *
 * This program uses the putchar function to
 * print all the numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = '0';
	char af = 'a';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}

	while (af <= 'f')
	{
		putchar(af);
		af++;
	}

	putchar('\n');

	return (0);

}
