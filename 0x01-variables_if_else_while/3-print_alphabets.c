#include <stdio.h>
/**
* main - prints alphabet
* Description: prints alphabet in lowercase and uppercase
* Return: 0
*/
int main(void)
{
char x = 'a';
char y = 'A';
while (x <= 'z')
{
putchar(x);
x++;
}
while (y <= 'Z')
{
putchar(y);
y++;
}
putchar('\n');
return (0);
}
