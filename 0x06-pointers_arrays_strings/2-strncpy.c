#include "main.h"

/**
 * _strncpy - copies a string until index n
 * @dest: pointer to empty string to be copied int
 * @src: pointer to string to be copied
 * @n: total number of character to copied
 *
 * Return: char *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
