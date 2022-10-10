#include <stdio.h>
/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * The numbers must be separated by comma, followed by a space
 *
 * Return: Always 0.
 */
int main(void)
{
	long int counter, fibonacci1, fibonacci2, fibonacci3;

	printf("1, 2, ");

	fibonacci1 = 1;
	fibonacci2 = 2;
	counter = 3;
	while (counter <= 50)
	{
		fibonacci3 = fibonacci1 + fibonacci2;
		printf("%ld, ", fibonacci3);
		fibonacci1 = fibonacci2;
		fibonacci2 = fibonacci3;
		counter++;
	}
	printf("\n");
	return (0);
}
