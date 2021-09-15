#include "main.h"

/**
* _strlen_recursion - returns length of string
* Description: function that returns the length of a string
* @s: character whose length will be returned
* Return: length of the string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * isPalindrome - checks if string is palindrome
 * @s: string to be checked
 * @i: iterator
 * @j: iterator
 * Return: 1 if a string is a palindrome and 0 if not
 */
int isPalindrome(char *s, int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	if (*(s + i) != *(s + j))
	{
		return (0);
	}
	if (i < j + i)
	{
		return (isPalindrome(s, i + 1, j - 1));
	}
	return (1);
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: string to be checked
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);

	if (n == 0)
	{
		return (1);
	}
	return (isPalindrome(s, 0, n - 1));
}
