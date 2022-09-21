/**
 * _strcat - this function concatenates two strings
 * appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * Returns a pointer to the resulting string dest
 * @src: string to append
 * @dest: string to be append to
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	char temp[1000];

	for (i = 0; src[i] != '\0'; i++)
	{
		temp[i] = src[i];
	}

	for (j = 0; dest[j] != '\0'; j++)
	{
		temp[i] = dest[j];
		i++;
	}

	temp[i] = '\0';

	dest = temp;

	return (dest);
}
