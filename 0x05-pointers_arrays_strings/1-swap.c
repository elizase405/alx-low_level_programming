#include "main.h"

/**
 * swap_int - swaps the value of 2 integers
 * @a: pointer variable to first integer
 * @b: pointer variable to 2nd integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
