#include "main.h"
/**
* swap_int - swap two integers
* Description: function that swaps the values of two integers
* @a: first integer
* @b: second integer
*/
void swap_int(int *a, int *b)
{
int x;
x = *a;
*a = *b;
*b = x;
}
