/**
 * _memcpy -  copies n bytes from memory area src to memory area dest
 *
 * @src: memory area to copy from
 * @dest: memory area to copy to
 * @n: bytes from s to copy to dest
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
