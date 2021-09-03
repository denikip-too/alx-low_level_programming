#include "main.h"
/**
* print_triangle -  prints a triangle
* @size: size of triangle
*/
void print_triangle(int size)
{
int a, b;
a = size;
if (size <= 0)
{
_putchar('\n');
}
while (size > 0)
{
for (b = 0; b < a; b++)
{
_putchar((b < size - 1) ? ' ' : '#');
}
_putchar('\n');
size--;
}
}
