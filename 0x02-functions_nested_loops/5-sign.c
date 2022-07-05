#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: Input number
 * Description: this function prints sign
 * Return: 1 if number is positive,0 if number is 0, or
 * -1 if number is negative
 */
int print_sign(int n)
{
int value = 0;
if (n > 0)
{
value = 1;
_putchar('+');
}
else if (n == 0)
{
value = 0;
_putchar('0');
}
else
{
value = -1;
_putchar('-');
}
return (value);
}
