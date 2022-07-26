#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
<<<<<<< HEAD
 * @s: string
 * Return: no return.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
=======
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
>>>>>>> ad30e28f02006eb95516495b2f96e2b2898c1a2f
}
