/**
 * _strchr - locates a character in a string
 * Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 * @s: string to search in
 * @c: character to search for
 * Return: the pointer found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != c && *(s + i) != '\0')
	{
		i++;
	}

	if (*(s + i) == c)
	{
		return (s + i);
	}

	else
	{
		return (0);
	}
}
