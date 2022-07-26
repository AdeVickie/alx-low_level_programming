#include "main.h"

<<<<<<< HEAD
/**
 * is_prime - detects if an input number is a prime number.
 * @n: input number.
 * @c: iterator.
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number - detects if an input number is a prime number
 * @n: input number
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
=======
int check_prime(int factor, int possible_prime);

/**
 * is_prime_number - returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: the integer
 *
 * Return: 1 if the input integer is a prime number,
 * otherwise 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);

	return (check_prime(2, n));
}

/**
 * check_prime - checks if 'possible_prime' is a prime
 * number using 'factor'
 * @factor: factor to check
 * @possible_prime: a possible prime number
 *
 * Return: 1 if 'possible_prime' is a prime number,
 * otherwise 0
 */
int check_prime(int factor, int possible_prime)
{
	if (possible_prime < 2
			|| possible_prime % factor == 0)
		return (0);
	if (factor > possible_prime / 2)
		return (1);

	return (check_prime(factor + 1, possible_prime));
>>>>>>> ad30e28f02006eb95516495b2f96e2b2898c1a2f
}
