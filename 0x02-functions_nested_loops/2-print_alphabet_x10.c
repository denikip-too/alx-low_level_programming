#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase
*/
void print_alphabet_x10(void)
{
  int c;
  int x;
  c =0;
  while (c < 10)
    {
      for (x = 97; x <= 122; x++)
	_putchar(x);
      _putchar('\n');
      c++;
    }
}
