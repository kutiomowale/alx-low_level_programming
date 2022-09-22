#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: string to copy to
 * @src: string to copy from
 * @n: bytes from src to use
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
