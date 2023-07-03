#include "main.h"

/**
 * _strspn - returns length of prefix substring
 * @s: pointer to arry that will be check through
 * @accept: pointet to array that will be used to check into s
 *
 * Return : number of accepted bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	int total, i = 0, j;

	while (s[i])
	{
		total = 1;
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				total = 0;
				break;
			}
			j++;
		}
		i++;
		if (total == 1)
			break;
	}

	return (i - 1);
}
