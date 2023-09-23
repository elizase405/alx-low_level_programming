#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes string into 1337
 * @a: pointer to string to be encoded
 * Description: char == 'a' or 'A' becomes 4, char = 'e' or 'E' becomes 3,
 * char = 'o' or 'O' becomes 0, char = 't' or 'T' becomes 7,
 * char = 'l' or 'L' becomes 1
 *
 * Return: char *a
 */

char *leet(char *a)
{
	int i = 0, j = 0;

	while (a[i])
		i++;

	while (j < i)
	{
		if (a[j] == 97 || a[j] == 65)
			a[j] = 52;
		else if (a[j] == 'e' || a[j] == 'E')
			a[j] = '3';
		else if (*(a + j) == 111 || *(a + j) == 79)
			*(a + j) = '0';
		else if (*(a + j) == 't' || *(a + j) == 'T')
			*(a + j) = 55;
		else if (a[j] == 'l' || *(a + j) == 108)
			a[j] = 49;
		j++;
	}

	return (a);
}
