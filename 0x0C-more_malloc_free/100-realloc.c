#include "main.h"
#include <stdlib.h>

/**
 * *_memcpy -  copies memory area
 * @dest: copied memory address
 * @src: memory area to be copied
 * @n: size of memory area to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (*src && n--)
	{
		*dest++ = *src++;
	}
	if (!*src)
	{
		while (*dest && n--)
		{
			*dest++ = 0;
		}
	}
	return (p);
}
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: allocated space for ptr in bytes
 * @new_size: bytes of the new memory block
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	unsigned int n;

	ptr = malloc(old_size);
	ptr2 = malloc(new_size);
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		ptr2 = malloc(new_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		n = old_size;
	}
	else
	{
		n = new_size;
	}
	ptr2 = _memcpy(ptr2, ptr, n);
	return (ptr2);
}
