#include "main.h"

/**
 * main - Entry point
 * This program prints to the screen
 * the text "_putchar" followed
 * by a new line using the _putchar function
 * defined in the file "_putchar.c"
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ab[] = "_putchar";
	int n = 0;

	while (n < 7)
	{
		_putchar(ab[n]);
		n++;
	}

	_putchar('\n');

	return (0);
}
