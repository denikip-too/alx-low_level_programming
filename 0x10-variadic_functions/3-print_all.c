#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format:  list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	char *pas = "";
	char *str;
	unsigned int i = 0;
	va_list arguments;

	va_start(arguments, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", pas, va_arg(arguments, int));
					break;
				case 'i':
					printf("%s%d", pas, va_arg(arguments, int));
					break;
				case 'f':
					printf("%s%f", pas, va_arg(arguments, double));
					break;
				case 's':
					str = va_arg(arguments, char *);
					if (!str)
					{
						str = "(nil)";
					}
					printf("%s%s", pas, str);
					break;
				default:
					i++;
					continue;
			}
			pas = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(arguments);
}
