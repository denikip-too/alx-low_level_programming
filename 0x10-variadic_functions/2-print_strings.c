#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list s;
	char *p;

	va_start(s, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(s, char *);
		if (!p)
		{
			p = "(nil)";
		}
		if (separator == NULL)
		{
			printf("%s", p);
		}
		else if (separator && !i)
		{
			printf("%s", p);
		}
		else
		{
			printf("%s%s", separator, p);
		}
	}
	printf("\n");
	va_end(s);
}
