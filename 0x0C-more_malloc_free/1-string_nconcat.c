#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates 2 strings
 * @n: length of string s2 to add to pointer
 * @s1: string to be added to new pointer
 * @s2: string to be added to new pointer from index 0 to n.
 *
 * Return: pointer to new array
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, newlen, lens1, lens2, z;
	unsigned int j = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != 0)
		i++;
	while (*(s2 + j) != '\0')
		j++;

	lens1 = i;

	(n >= j) ? (lens2 = j) : (lens2 = n);

	concat = malloc(sizeof(s1[i]) * (lens1 + lens2 + 1));

	if (concat == NULL)
		return (NULL);

	for (z = 0; z < lens1; z++)
		concat[z] = s1[z];

	newlen = lens1;

	for (z = 0; z < lens2; z++)
	{
		concat[newlen] = s2[z];
		newlen++;
	}

	concat[lens1 + lens2 + 1] = '\0';

	return (concat);
}
