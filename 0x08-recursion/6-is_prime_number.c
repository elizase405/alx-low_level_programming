/**
 * is_prime_number -checks if n is a prime number
 * @n: integer to be checked
 *
 * Return: 1 if prime, else 0 (int)
 */

/**
 * is_prime_num - helper function to is_prime_number
 * @x: int from is_prime_number
 * @y: hardcoded value to check comparison
 *
 * Return: int
 */
int is_prime_num(int x, int y)
{
	if ((x % y) == 0)
	{
		if (x == y)
			return (1);
		return (0);
	}
	return (is_prime_num(x, y + 1));
}

int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (0);
	return (is_prime_num(n, 2));
}
