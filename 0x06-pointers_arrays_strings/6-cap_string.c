/**
 * cap_string - capitalizes all words of a string
 * Separators of words: space, tabulation, new line
 * , ,, ;, ., !, ?, ", (, ), {, and }
 * @str: string to be worked on
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 1;
	int j;

	char temp[1000];

	if (str[0] >= 'a' && str[0] <= 'z')
		temp[0] = str[0] - 32;
	else
		temp[0] = str[0];
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.')
				temp[i] = str[i] - 32;
			else if (str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '!')
				temp[i] = str[i] - 32;
			else if (str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == 9)
				temp[i] = str[i] - 32;
			else if (str[i - 1] == '{' || str[i - 1] == '}' || str[i - 1] == 11)
				temp[i] = str[i] - 32;
			else if (str[i - 1] == 10 || str[i - 1] == 32)
				temp[i] = str[i] - 32;
			else
				temp[i] = str[i];
		}
		else
			temp[i] = str[i];
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
