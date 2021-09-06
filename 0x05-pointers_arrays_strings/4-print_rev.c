#include "main.h"
/**
* _strlen - returns the length of a string
* @s: string s
* Return: length of string
*/
int _strlen(char *s)
{
char *p = s;
while (*s)
s++;
return (s - p);
}
/**
* print_rev - prints string
* @s: string to be reversed
*/
void print_rev(char *s)
{
int size = _strlen(s);
while (size--)
_putchar(*(s + size));
_putchar('\n');
}
  
