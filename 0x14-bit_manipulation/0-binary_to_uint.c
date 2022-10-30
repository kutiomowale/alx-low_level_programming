#include "main.h"
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
