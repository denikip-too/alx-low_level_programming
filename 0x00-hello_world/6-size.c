#include <stdio.h>
/**
* main - prints size
* Description: prints the size of various data types in c in bytes
* Return: 0
*/
int main(void)
{
printf("Size of an char: %d byte(s)\n", sizeof(char));
printf("Size of a int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
