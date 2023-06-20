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
	total = a + 25;
	
	while (a < total)
	{
		putchar(a);
		a++;
	}

	printf("%c\n", a);
	return 0;
}
