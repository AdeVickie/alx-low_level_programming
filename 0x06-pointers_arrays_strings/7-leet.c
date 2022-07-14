#include "main.h"
/**
 * leet -  encodes a string into 1337
 * @str: string to encode
 * Return: pointer to encoded str
 */
char *leet(char *str)
{
/* conversion tables */
char letters[] = "aeotl";
char values[] = "43071";
int i;
int j;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j] || str[i] == letters[j] - 32)
}
str[i] = values[j];
break;
}
}
}
return (str);
}
