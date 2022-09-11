#include <stdio.h>

/**
 * main - Entry point
 * This program prints all single digit numbers
 * of base 10 starting from 0,
 * followed by a new line.
 * The char variable type is not allowed
 * Only the putchar function is allowed, and
 * for a maximum of two times
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		ch++;

	}

	putchar('\n');

	return (0);

}
