#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * help - helper function to help determine if a string is a palidrone
 * @s: the string
 * @length: the string length
 * @count: a counter to help stop the program
 * @i: increament for forward string pointer
 * @j: increament for backward string pointer
 * Return: 1 if palidrone, 0 otherwise
 */

int help(char *s, int length, int count, int i, int j)
{
	if (*(s + i) == *(s + (length - j)))
	{
		if (count == (length / 2))
		{
			return (1);
		}
		else
		{
			i++;
			j++;
			count++;
			return (help(s, length, count, i, j));
		}
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * and 0 if not
 * @s: pointer to the string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);

	return (help(s, length, 1, 0, 1));
}
