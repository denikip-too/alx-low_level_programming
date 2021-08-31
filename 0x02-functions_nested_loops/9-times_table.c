#include "main.h"
/**
* times_table - prints the 9 times table
* Description: prints the 9 times table, starting with 0
*/
void times_table(void)
{
int x;
int y;
int z;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
if (x == 0 || y == 0)
{
_putchar(48);
continue;
}
z = x * y;
_putchar(',');
_putchar(' ');
if (z >= 10)
{
_putchar(z / 10 + 48);
_putchar(z % 10 + 48);
}
else
{
_putchar(' ');
_putchar(z + 48);
}
}
}
_putchar('\n');
}
      
