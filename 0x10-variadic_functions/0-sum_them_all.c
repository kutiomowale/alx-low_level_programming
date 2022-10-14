#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of parameters(n not inclusive)
 * Return: the sum, or 0 if n equals 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;

	unsigned int i;

	va_list ap;

	va_start(ap, n);

	sum = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}

	va_end(ap);
	return (sum);
}
