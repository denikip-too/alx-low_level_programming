#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#define min(a, b) ((a < b) ? a : b)

#include <stddef.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
#endif
