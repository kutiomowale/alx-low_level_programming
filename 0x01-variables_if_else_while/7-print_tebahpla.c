#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char az = 'z';

	while (az >= 'a')
	{
		putchar(az);
		az--;
	}

	putchar('\n');

	return (0);

}
