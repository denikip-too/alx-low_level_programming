#include "main.h"
/**
* *cap_string - capitalizes all words of a string
* @s: string to be capitalized
* Return: string
*/
char *cap_string(char *s)
{
char *ptr = s;
while (*s)
{
if (*s >= 97 && *s <= 122)
{
*s -= 32;
}
s++;
}
return (ptr);
}
