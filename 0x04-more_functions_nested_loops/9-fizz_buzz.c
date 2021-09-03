#include "main.h"
#include <stdio.h>
/**
* main - prints the numbers, Fizz, Buzz, FizzBuzz
* Return: 0
*/
int main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if (num % 3 == 0)
printf("Fizz ");
else if (num % 5 == 0)
printf("Buzz ");
else if (num % 15 == 0)
printf("FizzBuzz ");
else
printf("%i ", num);
}
return (0);
}
