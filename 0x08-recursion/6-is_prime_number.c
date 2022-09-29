/**
 * help - helper function
 * returns 1 if number is prime, 0 otherwise
 * @n: the number
 * @i: to check if number is fully divisible by numbers from 2 to n/2
 * Return: 1 0r 0
 */

int help(int n, int i)
{
	if (i > (n / 2))
	{
		return (1);
	}
	else if ((n % i) == 0)
	{
		return (0);
	}
	else
	{
		return (help(n, (i + 1)));
	}
}

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: the integer
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (help(n, 2));
	}
}
