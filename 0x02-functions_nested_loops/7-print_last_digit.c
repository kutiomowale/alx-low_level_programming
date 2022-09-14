#include "main.h"

/**
 * print_last_digit - This function prints the last digit of a number
 * @n: Parameter to be worked on
 * Return: prints last digit
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (ld);
}

