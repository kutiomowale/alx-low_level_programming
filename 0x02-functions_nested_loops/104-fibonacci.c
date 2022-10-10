#include <stdio.h>
/**
 * main - a program that prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * The numbers must be separated by comma, followed by a space
 * You are allowed to use the standard library
 * You are not allowed to use any other library (You can’t use GMP etc…)
 * You are not allowed to use long long, malloc, pointers, arrays/tables,
 * or structures
 * You are not allowed to hard code any Fibonacci number (except for 1 and 2)
 *
 * Return: Always 0.
 */
int main(void)
{
	float fibonacci1, fibonacci2, fibonacci3;
	int counter;

	printf("1, 2, ");

	fibonacci1 = 1;
	fibonacci2 = 2;
	counter = 3;
	while (counter <= 98)
	{
		fibonacci3 = fibonacci1 + fibonacci2;
		printf("%.0f", fibonacci3);
		if (counter != 98)
			printf(", ");
		fibonacci1 = fibonacci2;
		fibonacci2 = fibonacci3;
		counter++;
	}
	printf("\n");
	return (0);
}
