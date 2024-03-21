#include "search_algos.h"
#include <stdlib.h>

/**
 * min - return the minimum of 2 values
 * @a: first value
 * @b: second value
 *
 * Return: int
 */

size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

/**
 * jump_search - search for a value in a sorted array of
 * integers using Jump search algorithm
 * @array: array to be searched through
 * @size: size of array
 * @value: value to look for
 *
 * Return: index of array or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	size_t step = 0;

	if (!array || !size)
		return (-1);
	/**
	 * Find the block where the value is in between
	 * prev < value < step
	 * Or -1 if not in array
	 */
	while (array[min(step, size - 1)] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);

		if (step > (size - 1))
			break;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

	/**
	 * Since the block is now prev < value < step
	 * The Linear search will loop from prev linearly
	 * until prev == value
	 */
	while ((prev <= min(step, size - 1)) && (array[prev] <= value))
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}

	return (-1);
}
