#include <stdio.h>

/**
 * main - Program that prints it name
 * @argc - no of arguments
 * @argv - array of string containing arguments as strings
 *
 * Return: int
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
