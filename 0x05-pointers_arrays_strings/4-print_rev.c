#include "main.h"
/**
 * print_rev - function to print in reverse
 * @s: value taken from main
 * Return: (0)
 */
void print_rev(char *s)
{
int len;
for (len = 0; s[len] != '\0'; len++)
{
}
for (len = len - 1; len >= 0; len--)
{
_putchar(s[len]);
}
_putchar('\n');
}
