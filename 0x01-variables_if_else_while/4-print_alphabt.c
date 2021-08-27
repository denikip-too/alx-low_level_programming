#include <stdio.h>
/**
* main - prints alphabet
* Description: prints alphabet in lowercase except q & e
* Return: 0
*/
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
if (x != 'e' && x != 'q')
putchar(x);
putchar('\n');
return (0);
}
