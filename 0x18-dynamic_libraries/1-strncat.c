#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates 2 string until index n
 * @dest: pointer to string to be concatenated to
 * @src: pointer to string to be concatenated
 * @n: total number of character to concatenate
 *
 * Return: char *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (j < n)
	{
		dest[i] = src[j];
		if (*(src + j) == '\0')
			break;
		j++;
		i++;
	}

	return (dest);
}
