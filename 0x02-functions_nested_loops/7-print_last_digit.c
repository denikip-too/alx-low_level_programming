#include "main.h"
/**
* _abs - computes the absolute value of an integer
* @n: integer to be converted
* Return: |n|
*/
int _abs(int n)
{
if (n >= 0)
return (n);
else
return (n * -1);
}
/**
* print_last_digit - prints the last digit of a number
* @n: number in which last digit is printed
* Return: value of the last digit
*/
int print_last_digit(int n)
{
int last_digit;
last_digit = _abs((n % 10));
_putchar(last_digit + 48);
return (last_digit);
}
