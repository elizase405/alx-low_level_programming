#include "main.h"

/**
 * puts2 - prints every other character of string
 * @str: pointer to string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
