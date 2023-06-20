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
	char A = 'A';

	total = 0;
	while (total < 26)
	{
		putchar(a);
		a++;
		total++;
	}
	total = 0;
	while (total < 26)
	{
                putchar(A);
                A++;
		total++;
        }
	putchar('\n');
	return (0);
}
