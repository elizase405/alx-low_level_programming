#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies 2 numbers
 * @argc: no of arguments
 * @argv: array of string containing arguments as strings
 *
 * Return: int
 */

int main(int argc, char **argv)
{
	(void) argc /*ignore argc*/
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int num1 = atoi(argv[1]), num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}
