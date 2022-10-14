#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings, followed by a new line.
 *
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *str;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if ((i < (n - 1)) && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
