#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp[500];

	while (s[i])
	{
		temp[i] = s[i];
		i++;
	}
	while (i--)
	{
		s[i] = temp[j];
		j++;
	}
}
