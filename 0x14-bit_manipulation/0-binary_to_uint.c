#include "main.h"

/**
 * powx - powers a number b to p's power
 * @b: base
 * @p: power
 * Return: return b to power of a
 */
unsigned long int powx(int b, int p)
{
	unsigned long int ans = 1;

	while (p)
	{
		ans *= b;
		p--;
	}
	return (ans);
}

/**
* _strlen - returns length of string
* Description: function that returns the length of a string
* @s: character whose length will be returned
* Return: length of the string
*/
int _strlen(const char *s)
{
	int i = 0;

	while (*s)
	{
		i += 1;
		s++;
	}
	return (i);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer pointing to a string of 0 and 1 chars
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int p;
	int n = 0;

	if (!b)
	{
		return (0);
	}
	p = _strlen(b) - 1;
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		if (*b == '1')
			n += powx(2, p);
		b++;
		p--;
	}
	return (n);
}
