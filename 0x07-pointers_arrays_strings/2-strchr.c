#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strchr - funcion that locates a character in a string
 * Description: Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 * @s: pointer to string s
 * @c: character to look for in s
 *
 * Return: char *
 */

char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
		i++;

	for (j = 0; j <= i; j++)
        {
		if (c == s[j])
		{
			s += j;
			return (s);
		}
	}

	return ('\0');
}
