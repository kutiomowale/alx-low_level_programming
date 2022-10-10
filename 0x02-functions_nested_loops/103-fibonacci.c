#include <stdio.h>
/**
 * main - By considering the terms in the Fibonacci sequence
 * whose values do not exceed 4,000,000, write a program that finds and prints
 * the sum of the even-valued terms, followed by a new line
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int sumeven, fibonacci1, fibonacci2, fibonacci3;

	fibonacci1 = 1;
	fibonacci2 = 1;
	fibonacci3 = 0;
	sumeven = 0;
	while (fibonacci3 < 4000000)
	{
		fibonacci3 = fibonacci1 + fibonacci2;
		if (((fibonacci3 % 2) == 0) && fibonacci3 < 4000000)
			sumeven = sumeven + fibonacci3;
		fibonacci1 = fibonacci2;
		fibonacci2 = fibonacci3;
	}
	printf("%ld\n", sumeven);
	return (0);
}
