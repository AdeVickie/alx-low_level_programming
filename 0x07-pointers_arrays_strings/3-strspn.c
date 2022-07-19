#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: segment to compare bytes from
* @accept: string of bytes to compare with
* Return: number of bytes in segment s which consist of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int a, b;
a = 0;
while (s[a] != '\0')
{
b = 0;
while (accept[b] != '\0' && s[a] != accept[b])
b++;
if (accept[b] == '\0')
return (a);
a++;
}
return (a);
}
