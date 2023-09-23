#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encode a string using rot13
 * @a: string to be encoded
 *
 * Return: char *a
 */

char *rot13(char *a)
{
	int j = 0;
	int i;

	while (a[j])
		j++;

	for (i = 0; i < j; i++)
	{
		if (a[i] >= 65 && a[i] <= 90)
			a[i] = a[i] - 13;
		else if(*(a + i) >= 97 && *(a + i) <= 122)
			a[i] = (a[i] - 13);
	}

	return (a);
}
