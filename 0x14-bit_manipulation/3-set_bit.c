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
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: integer
 * @index: index starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > sizeof(n) * BIT_SIZE - 1)
	{
		return (-1);
	}
	i = powx(2, index);
	*n = *n | i;
	return (1);
}
