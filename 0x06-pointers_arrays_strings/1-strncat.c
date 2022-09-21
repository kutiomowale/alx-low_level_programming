#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string to append to
 * @src: string to append from
 * @n: bytes from src to use
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j <= n - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
