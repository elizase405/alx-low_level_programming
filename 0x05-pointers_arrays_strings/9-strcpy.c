#include "main.h"

/**
 * _strcpy - copy code from src pointer to dest pointer
 * @src: pointer to array of character with string in it
 * @dest: pointer to array of character where src value will be copied into
 *
 * return: char*
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i]);

	return (dest);
}
