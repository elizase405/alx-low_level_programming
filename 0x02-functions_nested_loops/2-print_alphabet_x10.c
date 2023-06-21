#include "main.h"

/**
 * print_alphabet - Entry point
 * Description - prints alphabet in lowercase
 * Return: (void)
 */

void print_alphabet_x10(void)
{
	int i, j = 0;
	char a[26] = "abcdefghijklmnopqrstuvwxyz";

	while (j < 10)
	{
		while (i < 26)
		{
			_putchar(a[i]);
			i++;
		}
		j++;
		_putchar('\n');
	}
}
