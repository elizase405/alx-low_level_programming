#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: no of memory in byte
 * @size: size of datatype
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mal;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mal = malloc(size * nmemb);

	if (mal == NULL)
		return (NULL);

	return (mal);
}
