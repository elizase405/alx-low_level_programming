#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: no of memory in byte
 * @size: size of datatype
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mal;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mal = malloc(size * nmemb);

	nmemb *= size;

	if (mal == NULL)
		return (NULL);

	while (--nmemb)
		mal[nmemb] = 0;

	mal[nmemb] = 0;

	return ((void *)mal);
}
