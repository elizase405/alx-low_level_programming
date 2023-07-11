#include "main.h"
#include <stdio.h>

/**
 * rev - prints a string in reverse
 * @s: string to be printed in reverse
 *
 * Return: void
 */
char rev(char *s)
{
	int len = _strlen_recursion(s) - 1;
	printf("%d", len);
	return (s[len]);
}

/**
 * putss - prints a string
 * @s: string to be printed
 *
 * Return: void
 * base case -> s == 0
 */
char putss(char *s)
{
	_putchar(s[0]);
	return (s[0]);
}

/**
 * is_palindrome - checks if string is
 * palindrome(same forward and backwards)
 * @s: string to be checked
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	if(*s != '\0')
	{
		if (putss(s) == rev(s))
			return is_palindrome(s + 1);
		return (0);
	}
}
