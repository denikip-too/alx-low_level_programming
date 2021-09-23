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
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size of memory allocated for s2 in bytes
 * Return: pointer shall point to a newly allocated space in
 * memory, which contains s1, followed by the first n bytes of
 * s2, and null terminated or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l = _strlen(s2);
	unsigned int l2 = _strlen(s1);
	unsigned int i;
	char *p;

	if (n >= l)
	{
		n = l;
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	p = malloc(sizeof(char) * (l2 + n + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l2; i++)
	{
		p[i] = s1[i];
	}
	for (; i < (l2 + n); i++)
	{
		p[i] = s2[i - l2];
	}
	p[n + l2] = '\0';
	return (p);
}
