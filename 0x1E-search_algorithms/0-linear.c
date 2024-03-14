#include "search_algos.h"

/**
 * linear_search - implementing linear search algorithm
 * Description: search for a value in an array of integers using linear
 * search algorithm
 * @array: pointer to the first element in the array
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of array or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
