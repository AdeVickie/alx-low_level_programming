#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	char *test;
	unsigned int i = 1;

	i = 1;
	test = (char *)&i;

	return (*test);
}
