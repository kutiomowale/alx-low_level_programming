#include <stdio.h>

/**
 * main - Entry point
 * This program prints unique possible combinations of two numbers
 * Using the putchar function
 * Return: Always 0 (Sucess)
 */

int main(void)
{

	int i;
	int j;

	for (i = 48; i < 57; i++)

	{

		for (j = i + 1; j <= 57; j++)

		{

			putchar(i);

			putchar(j);

			if (j == 57 && i == 56)

				break;

			putchar(44);

			putchar(32);

		}

	}

	putchar('\n');

	return (0);

}
