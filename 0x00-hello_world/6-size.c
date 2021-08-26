#include <stdio.h>
/**
* main - prints size
* Description: prints the size of various types on the computer it is compiled and run on
* Return: 0
*/
int main(void)
{
printf("Size of int: %d byte(s) \n", sizeof(int));
printf("Size of char: %d byte(s) \n", sizeof(char));
printf("Size of float: %d byte(s) \n", sizeof(float));
printf("Size of long int: %d byte(s) \n", sizeof(double));
printf("Size og long long int: %d byte(s) \n", sizeof(long long int));
return (0);
} 
