/**
 * _strlen - function that returns the length of a string
 * @s: string to be worked on
 * Return: Length of string
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
