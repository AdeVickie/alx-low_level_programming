#include <stdio.h>
#include "main.h"
/**
 * _strlen - returns the length of a string.
 * by traversing throughout the values of string s
 * as it increments variable length and stops the loop at the end of the string
 * with len incremented to fit the length of the string
 * @s: value to evaluate.
 * Return: len
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}
