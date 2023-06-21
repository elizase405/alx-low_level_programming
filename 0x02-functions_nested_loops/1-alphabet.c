#include "main.h"

/**
 * print_alphabet - Entry point
 * Description - prints alphabet in lowercase
 * Return: (void)
 */

void print_alphabet(void)
{
	int i = 0;
	char a[26] = "abcdefghijklmnopqrstuvwxyz";

	while (i < 26)
	{
		_putchar(a[i]);
		i++;
	}
	_putchar('\n');
}
