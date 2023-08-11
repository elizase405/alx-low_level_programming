#include "main.h"
/**
 * print_binary - converts decimal number/base 10 to binary/base 2
 * @n: number to be turned to binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
