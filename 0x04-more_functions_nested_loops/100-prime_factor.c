#include "main.h"
#include <stdio.h>
/**
* main - primes highest prime factor of a number
* Return: 0
*/
int main(void)
{
long int n;
int div;
int maxFact;
n = 612852475143;
div = 2;
while (n != 0)
{
if (n % div != 0)
div = div + 1;
else
{
maxFact = n;
n = n / div;
if (n == 1) {
printf("%d", maxFact);
break;
}
}
}
return (0);
}
