#include "main.h"
#include <stdlib.h>

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
	unsigned int l2 = 0, l1 = 0, i, j;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + l1) != '\0')
	{
		l1++;
	}
	while (*(s2 + l2) != '\0')
	{
		l2++;
	}
	if (n >= l2)
	{
		n = l2;
	}
	p = malloc(sizeof(char) * (l1 + n + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; i++, j++)
	{
		p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
