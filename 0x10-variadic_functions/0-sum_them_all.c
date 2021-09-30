#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;
	int sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(nums, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, int);
	}
	va_end(nums);
	return (sum);
}
