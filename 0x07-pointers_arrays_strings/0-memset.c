/**
 * _memset -  fills the first n bytes of the memory area pointed to by s
 *
 * with the constant byte b
 * @s: memory area
 * @b: constant byte
 * @n: bytes of s to fill with b
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
