#include "main.h"
/**
 * set_bit - setss the value of a bit at a given index to 1
 * @n: number to be checked for set bit
 * @index: index to be checked for set bit
 *
 * Return: 1 if succeeded, -1 if failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int f;

	f = 1 << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= f;

	return (1);
}
