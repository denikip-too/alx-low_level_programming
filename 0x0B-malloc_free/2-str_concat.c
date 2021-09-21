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
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space in memory which
 * contain concatenated string and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *s3, *s4;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s3 = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)) + 1);
	if (!s3)
	{
		return (NULL);
	}
	s4 = s3;
	while (*s1)
	{
		*s4 = *s1;
		s1++;
		s4++;
	}
	while (*s2)
	{
		*s4 = *s2;
		s2++;
		s4++;
	}
	*s4 = '\0';
	return (s3);
}
