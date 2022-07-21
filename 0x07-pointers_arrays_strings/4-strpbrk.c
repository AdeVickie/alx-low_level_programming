#include<string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string to scan
 * @accept: character to search the string for
 * Return: first character
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	if ((s == NULL) && (accept == NULL))
		return (NULL);

	for (i = 0; s[i] != '\0'; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s);
		}
	}

	return (NULL);
}
