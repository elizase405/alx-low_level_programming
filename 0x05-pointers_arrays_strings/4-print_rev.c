#include "main.h"

/**
 * print_rev - prints the given string in reverse
 * @s: pointer to string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, j = 0;

	while (s[i])
		i++;
	for (j = 0; j <= i;)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
