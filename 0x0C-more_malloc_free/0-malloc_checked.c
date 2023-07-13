#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: no of memory in byte
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mal = malloc(b);
	if (mal == NULL)
		exit (98);

	return (mal);
}
