#include <stdio.h>

/**
 * main - Program that prints the arguments passed into it
 * @argc: no of arguments
 * @argv: array of string containing arguments as strings
 *
 * Return: int
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
