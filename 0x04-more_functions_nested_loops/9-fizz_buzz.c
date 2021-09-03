#include "main.h"
#include <stdio.h>
/**
* main - prints the numbers, Fizz, Buzz, FizzBuzz
* prints "Buzz" for multiple of 5
* prints "Fizz" for multiples of 3
* prints "FizzBuzz" for multiples of both 3and 5
* for numbers 1 - 100
* Return: 0
*/
int main(void)
{
int num;
for (num = 1; num <= 99; num++)
{
if (num % 15 == 0)
printf("FizzBuzz ");
else if (num % 5 == 0)
printf("Buzz ");
else if (num % 3 == 0)
printf("Fizz ");
else
printf("%i ", num);
}
printf("Buzz\n");
return (0);
}
