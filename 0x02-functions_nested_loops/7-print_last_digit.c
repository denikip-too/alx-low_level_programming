#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @n: number in which last digit is printed
* Return: value of the last digit
*/
int print_last_digit(int n)
{
int last_digit;
if (n >= 0)
{
last_digit = (48 += (n % 10));
_putchar(last_digit);
return (last_digit);
}
else
{
last_digit = (48 += ((n * -1) % 10));
_putchar(last_digit);
return (last_digit);
}
}
