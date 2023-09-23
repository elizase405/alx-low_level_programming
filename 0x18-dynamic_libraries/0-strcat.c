#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: pointer to string value
 * @src: pointer to a string value, will be added to dest.
 *
 * Return: char *
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
