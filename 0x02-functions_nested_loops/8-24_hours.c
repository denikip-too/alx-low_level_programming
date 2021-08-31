#include "main.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer
* Description: prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
int time;
int i;
time = 0;
while (time < 24)
{
for (i = 0; i < 60; i++)
{
_putchar(time / 10 + 48);
_putchar(time % 10 + 48);
_putchar(':');
_putchar(i / 10 + 48);
_putchar(i % 10 + 48);
_putchar('\n');
}
time++;
}
}
