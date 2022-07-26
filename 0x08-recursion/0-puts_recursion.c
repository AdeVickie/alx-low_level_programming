#include "main.h"

/**
<<<<<<< HEAD
 * _puts_recursion - prints a string
 * @s: pointer to string to print
=======
 * _puts_recursion - prints a string, followed by a new line.
 * @s: the string
>>>>>>> ad30e28f02006eb95516495b2f96e2b2898c1a2f
 */

void _puts_recursion(char *s)
{
<<<<<<< HEAD
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
=======
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(++s);
>>>>>>> ad30e28f02006eb95516495b2f96e2b2898c1a2f
}
