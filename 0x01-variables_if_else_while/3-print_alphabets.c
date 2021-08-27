#include <stdio.h>
/**
* main - prints alphabet
* Description: prints alphabet in lowercase and uppercase
* Return: 0
*/
int main(void)
{
char x = 'a';
while (x <= 'z')
{
putchar(x);
x++;
}
char y = 'A';
while (y <= 'Z')
{
putchar(y);
y++;
}
putchar('\n');
return (0);
}
