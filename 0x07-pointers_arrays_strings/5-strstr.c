#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: strings to scan
 * @needle: string to compare haystack to
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	int len1 = 0;
	int len2 = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; needle[i] != '\0'; i++)
	{
		len2++;
	}
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (j == len2)
			return (&haystack[i]);
	}

	return (NULL);
}
