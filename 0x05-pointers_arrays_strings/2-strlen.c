#include "main.h"
/**
* _strlen - returns length of string
* Description: function that returns the length of a string
* @c: character whose length will be returned
* Return: length of the string
*/
int _strlen(char *s)
{
int i;
while (*s != '\0')
{
i += 1;
s++;
}
return (i);
}
