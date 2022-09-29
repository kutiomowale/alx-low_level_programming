/**
 * help - helper function to find the square root of a number
 * @n: the number
 * @i: the possible result
 * Return: the result
 */
int i = 0;
int help(int n, int i)
{
	if (n == i)
	{
		return (-1);
	}
	if ((i * i) == n)
	{
		return (i);
	}
	else
	{
		return (help(n, (i + 1)));
	}
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * If n does not have a natural square root, the function should return -1
 * @n: the number
 * Return: the result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (help(n, i));
	}
}
