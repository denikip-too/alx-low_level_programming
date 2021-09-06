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
* puts2 - prints character of a string, starting with the first character
* @str: string to be printed
*/
void puts2(char *str)
{
int x;
int size;
x = 0;
size = _strlen(str);
while (x < size)
{
_putchar(*(str + x));
x += 2;
}
_putchar('\n');
}
