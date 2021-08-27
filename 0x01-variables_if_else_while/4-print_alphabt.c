#include <stdio.h>
/**
* main - prints alphabet
* Description: prints alphabet in lowercase except q & e
* Return: 0
*/
int main(void)
{
char x = 'a';
while (x <= 'z')
{
if (x == q || x == e)
continue;
else
putchar(x);
x++;
}
putchar('\n');
return (0);
}
