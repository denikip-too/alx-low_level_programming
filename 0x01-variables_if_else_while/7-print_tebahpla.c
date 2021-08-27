#include <stdio.h>
/**
* main - prints alphabet
* Description: prints alphabet in lowercase in reverse order
* Return: 0
*/
int main(void)
{
char x = 'z';
while (x >= 'a')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
