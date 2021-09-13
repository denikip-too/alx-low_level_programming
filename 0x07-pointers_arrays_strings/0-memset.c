#include "main.h"
/**
 * *_memset - fills the first n bytes of the memory
 *    area pointed to by s with the constant byte b
 * @s: pointer to the memory area to be filled
 * @b: characters to fill the memory
 * @n: size of the momory in bytes to be filled
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory = s, value = b;

	while (i < n)
	{
		memory[i] = value;
		i++;
	}
	return (memory);
}

