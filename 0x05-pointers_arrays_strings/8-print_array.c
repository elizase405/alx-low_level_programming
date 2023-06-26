#include "main.h"
#include <stdio.h>

/**
 * print_array - prints values of arr from 0 to n
 * @a: array to be loop into
 * @n: specifies n to know how may index to get
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%c, ",a[i]);

	_putchar('\n');
}
