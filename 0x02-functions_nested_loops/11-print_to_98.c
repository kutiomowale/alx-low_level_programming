#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * 
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98
 * You are allowed to use the standard library
 * 
 * @n: starting number
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);

		if (n > 98)
		{
			n = n - 1;
		}
		else
		{
			n = n + 1;
		}
	}

	printf("98\n");
}
