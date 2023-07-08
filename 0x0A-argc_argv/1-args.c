#include <stdio.h>

/**
 * main - Program that prints the number of arguments passed into it
 * @argc: no of arguments
 * @argv: array of string containing arguments as strings
 *
 * Return: int
 */

int main(int argc, char __attribute__((__unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
