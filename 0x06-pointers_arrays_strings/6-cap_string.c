#include "main.h"
/**
* isLower - checks if string s in lower case
* @i: characters
* Return: 1 if true, 0 if false
*/
int isLower(char i)
{
return (i >= 97 && i <= 122);
}
/**
* isDelimeter - determines if ascii is delimeter
* @y: character
* Return: 1 if true, 0 if false
*/
int isDelimeter(char y)
{
int i;
char delimeter[] = " \t\n,.!?\"(){}";
for (i = 0; i < 12; i++)
{
if (y == delimeter[i])
{
return (1);
}
}
return (0);
}
/**
* *cap_string - capitalizes all words of a string
* @s: string to be capitalized
* Return: string
*/
char *cap_string(char *s)
{
char *ptr = s;
int foundDelimit = 1;
while (*s)
{
if (isDelimeter(*s))
{
foundDelimit = 1;
}
else if (isLower(*s) && foundDelimit)
{
*s -= 32;
foundDelimit = 0;
}
else
{
foundDelimit = 0;
}
s++;
}
return (ptr);
}
