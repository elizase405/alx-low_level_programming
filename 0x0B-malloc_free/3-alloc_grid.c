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
	int i = 0, **array_of_array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array_of_array = malloc(sizeof(int) * height);

	if (array_of_array == NULL)
	{
		free(array_of_array);
		return (NULL);
	}

	/*for (j = 0; j < height; j++)
	{
		array_of_array[i] = malloc(sizeof(int) * width);
		if (array_of_array[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(array_of_array[i]);
			free(array_of_array);
			return (NULL);
		}
	}*/
	while (i < height)
	{
		array_of_array[i] = malloc(sizeof(int) * width);
		if (array_of_array[i] == NULL)
		{
			free(array_of_array[i]);
			free(array_of_array);
			return (NULL);
		}
		array_of_array[i] = row_func(width);
		i++;
	}

	return (array_of_array);
}
