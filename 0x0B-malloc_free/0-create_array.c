#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char in array
 *
 * Return: char * or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);

	unsigned int i;

	for (i = 0; size > i; i++)
		arr[i] = c;

	return (arr);
}
