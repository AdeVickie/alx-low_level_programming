#include "main.h"

/**
<<<<<<< HEAD
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: the length of a string.
 */

=======
 * _strlen_recursion - returns the length of a string.
 * @s: the string
 *
 * Return: the length of the string
 */
>>>>>>> ad30e28f02006eb95516495b2f96e2b2898c1a2f
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
<<<<<<< HEAD
	else
		return (1 + _strlen_recursion(s + 1));
=======

	return (_strlen_recursion(++s) + 1);
>>>>>>> ad30e28f02006eb95516495b2f96e2b2898c1a2f
}
