#include "main.h"

/**
 * _memcpy - functions that copies memory area
 * Description: The _memcpy() function copies n bytes
 * from memory area src to memory area dest
 * @dest: pointer to array to be copied into
 * @src: pointer to array to copied from
 * @n: total number of array to copy
 *
 * Return: char *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
