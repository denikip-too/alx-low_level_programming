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
 * get_bit - returns the value of a bit at a given index
 * @n: number whose value of a bit is given
 * @index: index starting from 0 of the bit you want to get
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > sizeof(n) * BIT_SIZE - 1)
	{
		return (-1);
	}
	i = powx(2, index);
	if (i & n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
