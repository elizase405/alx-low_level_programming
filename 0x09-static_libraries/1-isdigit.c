#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check if c is digit
 *
 * @c: input for character
 *
 * Return: 1 if its a digit, 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
