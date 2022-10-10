#include <stdio.h>
/**
 * main - a program that computes and prints
 * the sum of all the multiples of 3 or 5 below 1024 (excluded),
 * followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, multiples3, multiples5, sum;

	sum = 0;
	i = 1;
	multiples3 = 1;
	while (multiples3 < 1024)
	{
		multiples3 = 3 * i;
		if (multiples3 < 1024)
			sum = sum + multiples3;
		i++;
	}

	i = 1;
	multiples5 = 1;
	while (multiples5 < 1024)
	{
		multiples5 = 5 * i;
		if (multiples5 < 1024)
			sum = sum + multiples5;
		i++;
	}

	printf("%d\n", sum);
	return (0);
}
