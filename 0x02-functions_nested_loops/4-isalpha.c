#include "main.h"

/**
 *_isalpha - checks for alphabetic character
 *@c: letter being tested
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if  (c >= 65 && c <= 122)
		return (1);
	else
		return (0);

}
