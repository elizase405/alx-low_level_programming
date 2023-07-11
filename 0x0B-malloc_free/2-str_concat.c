#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates 2 strings
 * Description: The returned pointer should point
 * to a newly allocated space in memory which
 * contains the contents of s1, followed by
 * the contents of s2, and null terminated
 * @s1: array of string
 * @s2: array of string
 *
 * Return: char *
 */

char *str_concat(char *s1, char *s2)
{
	int i, z, j = 0, k = 0;
	char *concat;

	if (s1 == NULL || s2 == NULL)
		return ("");

	while (s1[j] != 0)
		j++;
	while (*(s2 + k) != '\0')
	{
		k++;
		j++;
	}

	concat = (char *)malloc(sizeof(char) * (j + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < (j - k); i++)
		concat[i] = s1[i];
	for (z = 0; z <= k; z++)
	{
		concat[i] = s2[z];
		i++;
	}

	return (concat);
}
