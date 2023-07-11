#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - function that returns array of given parameter
 * Description: returns a pointer to a new string which is a
 * duplicate of the string str. Memory for the new string is
 * obtained with malloc, and can be freed with free.
 * @str: array to be duplicated
 *
 * Return: char *
 */

char *_strdup(char *str)
{
	int j, i = 0;
	char *copy;

	while (*(str + i) != 0)
		i++;

	copy = malloc(sizeof(char) * (i + 1));

	if (copy == NULL || str == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		*(copy + j) = str[j];

	return (copy);
}
