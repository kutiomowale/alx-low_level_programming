#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all possible combinations of single-digit numbers
 * They are separated by a ',' followed by a space
 * The numbers are printed in ascending order
 * I can only use the putchar funtion and for a maximum of four times
 * I am not allowed to use any variable of type char
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int ch = '0';

	while (ch <= '9')
	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}

		ch++;
	}

	putchar('\n');
	return (0);

}
