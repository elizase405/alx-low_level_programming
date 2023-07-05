/**
 * factorial - returns factorial of a given number
 * @n: number to be used
 *
 * Return: factorial of int n(int)
 * base case -> n < 0, n = 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
