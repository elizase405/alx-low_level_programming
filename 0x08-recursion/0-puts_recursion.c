#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 *
 * Description: This function works the same way
 * as the puts function for printing a string
 * but using recursion instead
 * Return: void
 * base case -> s == 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
