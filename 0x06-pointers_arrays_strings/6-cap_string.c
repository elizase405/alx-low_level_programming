#include <stdio.h>

/**
 * *cap_string - Capitaliza all words of a string
 * @a: pointer to string array
 *
 * Return: char *a
 */

char *cap_string(char *a)
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
