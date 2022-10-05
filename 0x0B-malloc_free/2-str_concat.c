#include <stdlib.h>
/**
 * _strlen - funtion finds the length of a string
 *
 * @str: the string
 * Return: the string length
 */

int _strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - a function that concatenates two strings
 * The returned pointer points to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated
 * if NULL is passed,it is treated as an empty string
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to created string, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;

	if (s1 == NULL)
		i = 0;
	else
		i = _strlen(s1);
	if (s2 == NULL)
		j = 0;
	else
		j = _strlen(s2);

	s = malloc(sizeof(char) * (i + j + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	else
	{
		int k, l;

		k = 0;
		while (k < i)
		{
			*(s + k) = *(s1 + k);
			k++;
		}

		l = 0;
		while (l < j)
		{
			*(s + k) = *(s2 + l);
			k++;
			l++;
		}

		*(s + k) = '\0';
		return (s);
	}
}
