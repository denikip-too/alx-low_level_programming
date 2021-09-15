#include "main.h"

/**
 * checkPrime - check if number is prime
 * @n: number to be checked
 * @i: iterator
 * Return: 1 if true, 0 if false
 */
int checkPrime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (checkPrime(n, i - 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number to be checked
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}
	return (checkPrime(n, n - 1));
}
