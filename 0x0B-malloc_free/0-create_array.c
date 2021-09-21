#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array of chars
 * @c: char to be initialized to an array
 * Return: NULL if size = 0 / if it fails or Returns a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *array;

	n = 0;
	array = malloc(size * sizeof(char));
	if (size == 0 || array == NULL)
	{
		return (NULL);
	}
	while (n < size)
	{
		array[n] = c;
		n++;
	}
	return (array);
}
