#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: (0)
*/

int main(void)
{
	int total;
	char a = 'a';

	total = 0;
	while (total < 26)
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a++;
		total++;
	}
	putchar('\n');
	return (0);
}
