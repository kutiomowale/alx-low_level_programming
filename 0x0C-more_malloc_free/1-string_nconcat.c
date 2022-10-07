#include <stdlib.h>

/**
 * _strlen - finds the length of a string of type char
 * @str: pointer to string
 * Return: the string length
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * string_nconcat - a function that concatenates two strings
 * new string is null terminated
 *
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: number of bytes from s2 to use
 *
 * Return: pointer to new concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;	/* lengths of strings */
	unsigned int k, l;
	char *str;

	if (s1 == NULL)
		i = 0;
	else
		i = _strlen(s1);
	if (s2 == NULL)
		j = 0;
	else
		j = _strlen(s2);
	if (n > j)
		n = j;
	if (s2 == NULL)
		n = 0;

	str = malloc(sizeof(char) * (i + n + 1));

	if (str == NULL)
	{
		return (NULL);
	}
	k = 0;
	while (k < i)
	{
		*(str + k) = *(s1 + k);
		k++;
	}
	l = 0;
	while (l < n)
	{
		*(str + k) = *(s2 + l);
		l++;
		k++;
	}

	*(str + k) = '\0';

	return (str);
}
