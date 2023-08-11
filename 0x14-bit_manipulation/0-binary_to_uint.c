#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to string of binary number to be converted
 *
 * Return: converted int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, num = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		num <<= 1;
		if (b[i] == '1')
			num += 1;
		i++;
	}

	for (i = 0; b[i] != 0; i++)
	{
		if ((b[i] != 48) && (b[i] != '1'))
			return (0);
	}

	return (num);
}
