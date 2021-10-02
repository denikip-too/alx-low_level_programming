#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - returns the sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns difference of a and b
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns product of a and b
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns result of the division of a by b
 * @a: first integer
 * @b: second integer
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n"), exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns remainder of the division of a by b
 * @a: first integer
 * @b: second integer
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n"), exit(100);
	}
	return (a % b);
}
