#include <stdio.h>
/**
* main - prints alphabet
* Description: prints alphabet in lowercase
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
char x = 'A';
while (x <= 'Z')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
