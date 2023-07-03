#include "main.h"

/**
 * _strspn - returns length of prefix substring
 * Description: no desription necessary as the necessary
 * things have already been said in the function name
 * @s: pointer to arry that will be check through
 * @accept: pointet to array that will be used to check into s
 *
 * Return : number of accepted bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	int total = 0, i = 0, j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				total++;
			j++;
		}
		i++;
	}

	return (i - total);
}
