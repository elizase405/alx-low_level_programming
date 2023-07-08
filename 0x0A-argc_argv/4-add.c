#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that adds positive numbers
 * @argc: no of arguments
 * @argv: array of string containing arguments as strings
 *
 * Return: int
 */

int main(int argc, char **argv)
{
	int i = 1, count = 0;

	while (i < argc)
	{
		int argi = atoi(argv[i]);
		
		if (argc == 1)
			break;
		else if (argi > 0)
			count += argi;
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", count);
	return (0);
}
