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
	unsigned int lens1 = 0, lens2 = 0, z;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lens1] != 0)
		lens1++;
	while (*(s2 + lens2) != '\0')
		lens2++;

	if (n < lens2)
		lens2 = n;

	concat = malloc(sizeof(s1[lens1]) * (lens1 + lens2 + 1));

	if (concat == NULL)
		return (NULL);

	for (z = 0; z < (lens1 + lens2); z++)
	{
		if (*s1)
		{
			concat[z] = *s1;
			s1++;
		}
		else
		{
			concat[z] = *s2;
			s2++;
		}
	}

	concat[z] = '\0';

	return (concat);
}
