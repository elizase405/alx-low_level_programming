#include <stdio.h>

/**
 * string_toupper - Chnage lowercase letters of a string to upercase
 * @a: array containing string
 *
 * Return: char *
 */

char *string_toupper(char *a)
{
	int j = 0;
	int i;

	while (a[j])
		j++;

	for (i = 0; i < j; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] = (a[i] - 32);
	}

	return (a);
}
