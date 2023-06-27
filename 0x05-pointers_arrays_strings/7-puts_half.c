#include "main.h"
#include <stdio.h>

/**
 * puts_half - returns second half of given string
 * @str: pointer of string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, j = 0;

	while (str[i])
		i++;

	if (i % 2 == 1)
		j = (i - 1) / 2;
	else
		j = i / 2;

	while (i > j)
	{
		_putchar(str[j]);
		j++;
	}

	_putchar('\n');

}
