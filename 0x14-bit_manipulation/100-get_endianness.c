#include "main.h"
/**
 * get_endianness - checks computer's endianess
 *
 * Return: 0 if big endian. 1 if little endian
 */

int get_endianness(void)
{
	char *ptrI;
	int i = 1;

	ptrI = (char *)&i;

	return (*ptrI);
}

