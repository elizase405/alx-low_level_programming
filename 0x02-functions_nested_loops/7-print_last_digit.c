#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: number to be tested
 * Description: prints last digit of a number
 *
 * Return: a digit
 */

int print_last_digit(int n)
{
	int num;

	if (n < 0)
		n = -n;

	num = n % 10;

	if (num < 0)
		num = -num;

	_putchar(num + '0');
	return (num);
}
