#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a - array to be reversed
 * @n: number of element in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i < n)
	{
		printf("last element: %d given index: %d, mutated index: %d my index: %d\n",a[i], n, j, i);
		*(a + i) = *(a + j);
		i++;
		j--;
	}
}
