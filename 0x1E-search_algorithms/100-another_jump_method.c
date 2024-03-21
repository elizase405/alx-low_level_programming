#include "search_algos.h"
#include <stdlib.h>

/**
 * min - return the minimum of 2 values
 * @a: first value
 * @b: second value
 *
 * Return int
 */

size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

/**
 * jump_search - search for a value in a sorted array of integers using Jump search algorithm
 * @array: array to be searched through
 * @size: size of array
 * @value: value to look for
 *
 * Return: index of array or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	size_t step = sqrt(size);

	printf("Val: %d\n", value);
	printf("prev: %ld, step: %ld\n", prev, step);

	/**
	 * Find the block where the value is in between
	 * prev < value < step
	 * Or -1 if not in array
	 */
	while (array[min(step, size) - 1] < value)
	{
		prev = step;
		step += sqrt(size);
		printf("prev: %ld, step: %ld\n", prev, step);

		if (prev >= size)
		{
			printf("If statement where Prev > Size activated\n");
			return (-1);
		}
	}

	/**
	 * Since the block is now prev < value < step
	 * The Linear search will loop from prev linearly
	 * until prev == value then break out of loop
	 * i don't understand the if statement
	 */
	while (array[prev] < value) 
	{
		prev++;
		printf("prev: %ld\n", prev);
		if (prev == min(step, size))
			return (-1);
	}

	/* Return prev */
	if (array[prev] == value)
		return (prev);
	else
		return (-1);
}
