#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * If the program is renamed, it will print the new name
 * without having to compile it again
 * @argc: arguement count
 * @argv: arguement array
 *
 * Return: Always 0.
 */

int main(int argc __attribute__ ((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
