#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * it prints the result, followed by a new line
 * If no number is passed to the program, it prints 0, followed by a new line
 * If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1
 * @argc: arguement count
 * @argv: arguement array
 *
 * Return: 0 on success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		int addition, i, j;

		addition = 0;

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]  != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			addition = addition + atoi(argv[i]);
		}
		printf("%d\n", addition);
	}
	return (0);
}
