#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * with a call to malloc: malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mal, *p;
	unsigned int i = 0;

	if (ptr == NULL)
		return ((void *)malloc(new_size));

	p = ((char *)ptr);

	if (new_size == old_size)
		return (ptr);

	mal = malloc(sizeof(char) * new_size);

	if (mal == NULL)
		return (NULL);

	while (i < old_size)
	{
		mal[i] = p[i];
		i++;
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	free(ptr);
	return ((void *)mal);
}
