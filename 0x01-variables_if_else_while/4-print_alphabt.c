#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char az = 'a';

	while (az <= 'z')
	{

		if (az != 'e' && az != 'q')
			putchar(az);

		az++;
	}

	putchar('\n');

	return (0);

}
