/**
 * leet - encodes a string into 1337
 *
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * @s: the string
 * Return: string
 */

char *leet(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i] = 52;
		else if (s[i] == 'e' || s[i] == 'E')
			s[i] = 51;
		else if (s[i] == 'o' || s[i] == 'O')
			s[i] = 48;
		else if (s[i] == 't' || s[i] == 'T')
			s[i] = 55;
		else if (s[i] == 'l' || s[i] == 'L')
			s[i] = 49;

		i++;
	}

	return (s);
}
