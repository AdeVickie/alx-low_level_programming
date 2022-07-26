#include "main.h"

<<<<<<< HEAD
/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each character of the string.
 * @s: string
 * @n1: smallest iterator.
 * @n2: biggest iterator.
 * Return: .
 */

int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
=======
int _strlen(char *s);
int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: the string
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len == 0)
		return (1);

	return (check_palindrome(s, 0, len - 1));
}

/**
 * _strlen - gets the length of a string
 * @s: the string
 *
 * Return: the string length
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen(++s) + 1);
}

/**
 * check_palindrome - checks if a substring is a palindrome
 * @s: the string
 * @start: the starting index of substring
 * @end: the stopping index of substring
 *
 * Return: 1 if substring is a palindrome, otherwise 0
 */
int check_palindrome(char *s, int start, int end)
{
	if (start == end)
		return (1);

	if (s[start] != s[end])
		return (0);

	if (start < end + 1)
		return (check_palindrome(s, start + 1, end - 1));

	return (1);
>>>>>>> ad30e28f02006eb95516495b2f96e2b2898c1a2f
}
