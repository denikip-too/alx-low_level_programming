#include <stdio.h>
/**
* main - prints alphabet
* Description: prints alphabet in lowercase
* Return: 0
*/
int main(void)
{
for(char x = 'A'; x <= 'Z'; x++)
{
char lower_x = tolower(x);
putchar(lower_x);
}
putchar('\n');
return (0);
}
