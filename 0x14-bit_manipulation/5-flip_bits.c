#include "main.h"

/**
 * countSetBits - count set bits
 * @n: integers
 * Return: return the number of counts
 */
int countSetBits(int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: first integer
 * @m: second integer
 * Return: count set bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}
