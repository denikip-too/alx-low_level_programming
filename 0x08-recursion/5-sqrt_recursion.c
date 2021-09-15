#include "main.h"

/**
 * findSqrt - finds square root
 * @x: number
 * @i: iterator
 * Return: result
 */
int findSqrt(int x, int i)
{
	if (x == 0 || x == 1)
	{
		return (x);
	}
	if (i * i == x)
	{
		return (i);
	}
	if (i * i > x)
	{
		return (-1);
	}
	return (findSqrt(x, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose square root is to be found
 * Return: result and return -1 If n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (findSqrt(n, 1));
}
