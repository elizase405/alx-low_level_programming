#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be checked for set bit
 * @index: index to be checked for set bit
 *
 * Return: set bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int f;

	f = 1 << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & f) == 0)
		return ((n & f));

	return (1);
}
