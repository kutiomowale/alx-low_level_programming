#include "main.h"
/**
 * print_binary - a function that prints the binary representation of a number
 * @n: the number
 * arrays are not allowed
 * malloc is not allowed
 * % or / operators are also not allowed
 * _putchar function is allowed, not printf
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
		return;
	}
	else if (((n >> 1) << 1) == n)
	{
		print_binary(n >> 1);
		_putchar('0');
	}
	else
	{
		print_binary(n >> 1);
		_putchar('1');
	}
}
