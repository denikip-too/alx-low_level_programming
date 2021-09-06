#include "main.h"
/**
* _strlen - returns length of string
* @s: character whose length will be returned
* Return: length of the string
*/
int _strlen(char *s)
{
int i;
i = 0;
while (*s)
{
i += 1;
s++;
}
return (i);
}
/**
* puts_half -  prints second half of a string
* @str: string to be printed
*/
void puts_half(char *str)
{
int len1, x, half;
len1 = _strlen(str);
half = (len1 % 2 == 0) ? len1 / 2 : (len1 - 1) / 2 + 1;
x = half;
while (x < len1)
{
_putchar(*(str + x));
x++;
}
_putchar('\n');
}
