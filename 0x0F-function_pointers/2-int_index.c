#include <stdlib.h>
/**
 * int_index - function that searches for an integer
 * @array: array to be looped through
 * @size: length of array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);

		if (result >= 1)
			return (i);
	}
	return (-1);
}
