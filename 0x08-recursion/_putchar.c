#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - function that prints a character c to stdout
 * @c: character to be printed
 * Return: The write function which is responsible for printing @c
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
