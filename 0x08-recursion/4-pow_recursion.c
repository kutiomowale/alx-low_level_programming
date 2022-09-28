/**
 * _pow_recursion - function that returns
 * the value of x raised to the power of y
 * If y is lower than 0, the function should return -1
 * x raised to the power of 0 is 1
 * @x: the number
 * @y: the power
 * Return: the result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
	return (x * _pow_recursion(x, (y - 1)));
	}
}
