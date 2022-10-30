#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: b is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 * if there is one or more chars in the string b that is not 0 or 1,
 * or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, temp, i;

	if (!b)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		b++;
	}
	b--;
	num = 0;
	i = 0;
	while (*b != '\0')
	{
		temp = *b - '0';
		num = num + (temp << i);
		i++;
		b--;
	}
	return (num);
}
