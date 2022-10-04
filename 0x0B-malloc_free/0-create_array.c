#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to intialize array with
 *
 * Return: 0 if size is 0, pointer to array created otherwise
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (0);
	}
	else
	{
		char *str;

		unsigned int i;

		str = malloc(sizeof(char) * size);

		i = 0;
		while (i < size)
		{
			*(str + i) = c;
			i++;
		}

		return (str);
	}
}
