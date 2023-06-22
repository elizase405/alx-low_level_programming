#include <stdlib.h>
#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: character to be tested
 *
 * Return 1 or 0
 */

int _isupper(int c)
{
	if (c > 65 && c < 97)
		return 1;
	return 0;
}
