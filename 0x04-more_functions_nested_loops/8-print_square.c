#include "main.h"
/**
* print_square - prints a square
* @size: size of square
*/
void print_square(int size)
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
