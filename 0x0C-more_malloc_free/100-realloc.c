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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: allocated space for ptr in bytes
 * @new_size: bytes of the new memory block
 * Return: pointer to new memory space, NULL if it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	unsigned int min;

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
	{
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		return (ptr2);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		min = old_size;
	}
	else
	{
		min = new_size;
	}
	ptr2 = _memcpy(ptr2, ptr, min);
	free(ptr);
	return (ptr2);
}
