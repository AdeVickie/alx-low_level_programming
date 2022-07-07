#include <unistd.h>
/**
 * _putchar- prints char c to stdout
 * @c: character to be printed
 * Return: Always zero
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
