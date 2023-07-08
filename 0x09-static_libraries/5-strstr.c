#include "main.h"
#include <stdio.h>

/**
 * _strstr - A function that locates a substring
 * Description: finds the first occurrence of the substring
 * needle in the string haystack.
 * @haystack: pointer to string to be looked through
 * @needle: pointer to string to look for.
 *
 * Return: pointer to the beginning of the located substring,
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}

	return ('\0');
}
