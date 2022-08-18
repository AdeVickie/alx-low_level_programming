#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: base number
 * @m: number to transform to
 * Return: the number of bit transformations needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, res;

	res = 0;
	for (i = 63; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			res++;
	return (res);
}
