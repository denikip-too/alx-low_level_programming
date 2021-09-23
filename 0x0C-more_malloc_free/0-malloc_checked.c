#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: size of memory allocated in bytes
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (!p)
	{
		exit(98);
	}
	return (p);
}
