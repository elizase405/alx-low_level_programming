#include "search_algos.h"

/**
 * print_array - loops through an array and prints it's value
 * @arr: array
 * @start: index to start looping
 * @end: index to stop looping
 *
 * Return: void
 */

void print_array(int *arr, int start, int end)
{
	printf("Searching in array: ");
	for (; start <= end; start++)
	{
		if (start == end)
			printf("%d\n", arr[start]);
		else
			printf("%d, ", arr[start]);
	}
}

/**
 * binary_search - implementing binary search algorithm
 * Description: search for a value in an array of integers using binary
 * search algorithm
 * @array: pointer to the first element in the array
 * @size: size of array
 * @value: value to search for
 * You can assume that array will be sorted in ascending order
 * You can assume that value won’t appear more than once in array
 *
 * Return: index of array or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int i, low, mid, high;

	low = 0;
	high = size - 1;

	if (!array)
		return (-1);

	i = 0;
	while (low != high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
		i++;
	}

	/* print the last value in the array */
	print_array(array, low, high);
	/**
	 * For edge case where only 1 value
	 * remains and it has not been checked
	 */
	if (array[low] == value)
		return (low);

	return (-1);
}
