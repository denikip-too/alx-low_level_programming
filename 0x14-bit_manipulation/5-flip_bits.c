#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first integer
 * @m: second integer
 * Return: count set bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	int count = 0;

	i = (n ^ m);
	while (i)
	{
		if (1 & i)
			count++;
		i = i >> 1;
	}
	return (count);
}
