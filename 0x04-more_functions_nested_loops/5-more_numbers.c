#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * _putchar only 3 times
 * Return: 0-14 10times followed by new line
 */
void more_numbers(void)
{
int i;
int b;
for (i = 0; i <= 9; i++)
{
for (b = 0; b <= 14; b++)
{
if (b > 9)
{
_putchar('1');
}
_putchar((b % 10) + '0');
}
_putchar('\n');
}
}
