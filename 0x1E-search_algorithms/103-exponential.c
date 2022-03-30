#include "search_algos.h"
#include <math.h>

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
        size_t l, mid, r, i;

        l = 0;
        r = size - 1;
        if (array == NULL)
                return (-1);
        while (l <= r)
        {
                printf("Searching in array: ");
                for (i = l; i <= r; i++)
                {
                        if (i != r)
                        {
                                printf("%d, ", array[i]);
                        }
                        else
                        {
                                printf("%d\n", array[r]);
                        }
                }
                mid = floor((l + r) / 2);
                if (array[mid] < value)
                {
                        l = mid + 1;
                }
                else if (array[mid] > value)
                {
                        r = mid - 1;
                }
                else
                {
                        return (mid);
                }
        }
        return (-1);
}
/**
 * exponential_search - searches for a value in a sorted array of integers using
 * the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;

	bound = 1;
	if (array == NULL)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound
				, array[bound]);
		bound *= 2;
	}
	return (binary_search(array, size, value));
}
