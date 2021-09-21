#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be returned
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
/**
 * *_strdup - returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter
 * @str: a string
 * Return: NULL if str = NULL /  if insufficient memory was available
 * or returns a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *s, *s1;
	int n;

	if (str == NULL)
	{
		return (NULL);
	}
	n = _strlen(str) + 1;
	s = malloc(n * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	s1 = s;
	while (*str)
	{
		*s1 = *str;
		str++;
		s1++;
	}
	*s1 = '\0';
	return (s);
}
