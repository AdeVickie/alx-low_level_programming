#include "main.h"

<<<<<<< HEAD
/**
 * power_operation - returns the natural square root of a number
 * @n: input number.
 * @c: iterator.
 * Return: square root or -1.
 */

int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (power_operation(n, 2));
=======
int get_sqrt(int n, int possible_root);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number
 *
 * Return: returns the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (get_sqrt(n, 1));
}

/**
 * get_sqrt - tries to get the square root of n by continously
 * comparing the square of 'possible_root' to n
 * @n: the number
 * @possible_root: a possible root of n
 *
 * Return: square root of n, -1 otherwise
 */
int get_sqrt(int n, int possible_root)
{
	int square = possible_root * possible_root;

	if (square == n)
		return (possible_root);
	if (square < n)
		return (get_sqrt(n, ++possible_root));

	return (-1);
>>>>>>> ad30e28f02006eb95516495b2f96e2b2898c1a2f
}
