#include <stdlib.h>

/**
 * row_func - function to create an array filled with 0
 * @width: no of 0 in array
 *
 * Return: int *
 */

int *row_func(int width)
{
	int i, *arr;

	arr = malloc(sizeof(int) * width);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
		arr[i] = 0;

	return (arr);
}
/**
 * alloc_grid - function to create 2d array
 * @width: no of rows of array
 * @height: no of columns of array
 *
 * Return: pointer to 2d array)
 */

int **alloc_grid(int width, int height)
{
	int **array_of_array;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	array_of_array = malloc(height * sizeof(int *));
	if (array_of_array == NULL)
	{
		free(array_of_array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array_of_array[i] = malloc(width * sizeof(int));
		if (array_of_array[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(array_of_array[i]);
			free(array_of_array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		array_of_array[i] = row_func(width);

	return (array_of_array);
}
