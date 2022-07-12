#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: value to evaluate.
 * @b: value to evaluate.
 * @n: This value helps store @a before it gives it to @b
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
