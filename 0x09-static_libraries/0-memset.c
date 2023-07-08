#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * Description: The _memset() function fills the first n bytes
 * of the memory area pointed to by s with the constant byte b
 * @s: pointer to array to be filled with constant byte b
 * @b: constant byte that will be the value of the first n bytes of array s
 * @n: total number of array to fill with n byte
 *
 * Return: char *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
