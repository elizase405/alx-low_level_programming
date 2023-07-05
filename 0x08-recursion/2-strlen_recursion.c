/**
 * _strlen_recursion - returns string length
 * @s: string to be used
 *
 * Return: length of string (int)
 * base case -> *s = 0
 */

int _strlen_recursion(char *s)
{
	if (*s == 0)
		return 0;
	return 1 + _strlen_recursion(s + 1);
}
