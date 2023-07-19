#include <stddef.h>
/**
 * array_iterator -  executes a function given as a parameter
 * on each element of an array
 * @array: array to be iterated on
 * @size: size of array
 * @action: pointer to function to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
