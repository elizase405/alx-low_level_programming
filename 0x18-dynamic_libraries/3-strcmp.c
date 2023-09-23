#include "main.h"
#include <string.h>

/**
 * _strcmp - compares 2 string
 * Description: returns integer less than 0 if s1 < s2.
 * If s1 > s2 returns integer > 0. If s1 == s2, returns 0.
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	/*
	int i = 0, z = 0, u = 0;
	int j;

	while (s1[i])
		i++;

	for (j = 0; j < i; j++)
	{
		if (*(s1 + j) == *(s2 + j))
			u++;
		else
			u--;
	}

	int num = s1[z] - s2[z];

	return (num);
	*/
	int i;
	
	i = strcmp(s1, s2);

	return i;
}
