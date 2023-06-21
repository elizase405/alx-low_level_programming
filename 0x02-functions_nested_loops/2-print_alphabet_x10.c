#include "main.h"

/**
 * print_alphabet - Entry point
 * Description - prints alphabet in lowercase
 * Return: (void)
 */

void print_alphabet_x10(void)
{
	int i, j;

	i = 0;
	char a[26] = "abcdefghijklmnopqrstuvwxyz";

	while (i < 10)
	{
		j = 0;
		while (j < 26)
		{
			_putchar(a[i]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
