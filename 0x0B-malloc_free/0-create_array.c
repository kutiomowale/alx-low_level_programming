#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to intialize array with
 *
 * Return: NULL if size is 0, a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *str;

		unsigned int i;

		str = malloc(sizeof(char) * size);

		if (str != 0)
		{
			i = 0;
			while (i < size)
			{
				*(str + i) = c;
				i++;
			}

			return (str);
		}
		else
			return (NULL);
	}
}
