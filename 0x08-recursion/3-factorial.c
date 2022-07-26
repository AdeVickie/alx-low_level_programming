#include "main.h"

/**
 * factorial - returns the factorial of a given number.
<<<<<<< HEAD
 * @n: input number.
 * Return: factorial of the number.
 */

=======
 * @n: the number
 *
 * Return: the factorial of n
 */
>>>>>>> ad30e28f02006eb95516495b2f96e2b2898c1a2f
int factorial(int n)
{
	if (n < 0)
		return (-1);
<<<<<<< HEAD
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
=======
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
>>>>>>> ad30e28f02006eb95516495b2f96e2b2898c1a2f
}
