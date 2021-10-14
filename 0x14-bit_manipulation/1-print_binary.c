#include "main.h"

/** 
 * powx - powers a number b to p's power
 * @b: base
 * @p: power
 * Return: return b to power of a
 */
unsigned long int powx(int b, int p)
{
        unsigned long int ans = 1;

        while (p)
        {
                ans *= b;
                p--;
        }
        return (ans);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: nuber whose array is to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = powx(2, sizeof(unsigned long int) * 31);
	int j = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (i)
	{
		if (!(n & i) && j)
		{
			_putchar('0');
		}
		else if (n & i)
		{
			_putchar('1');
			j = 1;
		}
		i = i >> 1;
	}
}
