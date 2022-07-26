#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
<<<<<<< HEAD
 * @x: base.
 * @y: exponent
 * Return: value of the exponentiation
 */

=======
 * @x: the number
 * @y: the power
 *
 * Return: the value of x raised to the power of y
 */
>>>>>>> ad30e28f02006eb95516495b2f96e2b2898c1a2f
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
<<<<<<< HEAD
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
=======
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, --y));
>>>>>>> ad30e28f02006eb95516495b2f96e2b2898c1a2f
}
