/**
 * _isalpha - This function checks for alphabetic character
 * @c: Holds character to be checked
 * Return: shows the result
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'B'))
		return (1);
	else
		return (0);
}
