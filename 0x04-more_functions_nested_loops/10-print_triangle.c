#include "main.h"
/**
* print_triangle -  prints a triangle
* @size: size of triangle
*/
void print_triangle(int size)
{
int a, b;
if (size < 0)
{
_putchar('\n');
}
else
{
for (a = 0; a < size; a++)
{
for (b = size; b > 0; b--)
{
_putchar('#');
}
_putchar('\n');
}
}
}
