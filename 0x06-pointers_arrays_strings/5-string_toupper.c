/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to be modified
 * Return: the modified string
 */
char *string_toupper(char *str)
{
	int i, j;

	char temp[1000];

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			temp[i] = str[i] - 32;
		}

		else
		{
			temp[i] = str[i];
		}

		i++;
	}

	temp[i] = '\0';

	j = 0;
	while (temp[j] != '\0')
	{
		str[j] = temp[j];
		j++;
	}

	str[j] = '\0';

	return (str);
}
