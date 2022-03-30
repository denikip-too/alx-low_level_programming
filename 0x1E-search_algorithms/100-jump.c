#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using the Jump
 * search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, m;

	i = 0;
	m = sqrt(size);
	if (array == NULL)
		return (-1);
	while (array[min(m, size) - 1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = m;
		m += sqrt(size);
		if (i >= size)
			return (-1);
	}
	/*printf("Value found between indexes [%ld] and [%ld]\n", i, j);*/
	while (array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i + 1;
		if (i == min(m, size))
			return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	if (array[i] == value)
	{
		return (i);
	}
	else
		return (-1);
}
