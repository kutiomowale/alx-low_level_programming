#include <stdlib.h>
/**
 * _strdup - a  function returns a pointer to a new string which is a duplicate
 * of the string str. Memory for the new string is obtained with malloc,
 * and can be freed with free
 * @str: pointer to string to be duplicated
 *
 * Return: NULL if str = NULL, otherwise a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		int i, j;
		char *new;	/* new is a pointer to the new string */

		i = 0;	/* length of string pointed to by str */
		while (*(str + i) != 0)
		{
			i++;
		}

		new = malloc(sizeof(char) * i);

		if (new != NULL)
		{
			j = 0;
			while (j < i)
			{
				*(new + j) = *(str + j);
				j++;
			}

			return (new);
		}
		else
			return (NULL);
	}
}
