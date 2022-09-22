#include "main.h"
/**
 * _strcmp - this function two strings
 * @s1: string to compare
 * @s2: string to compare
 *
 * Return: number
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	while (s1[i] != '\0')
		i++;

	j = 0;
	while (s2[j] != '\0')
		j++;

	if (i > j)
		return (15);
	else if (i < j)
		return (-15);
	else
		return (0);
}
