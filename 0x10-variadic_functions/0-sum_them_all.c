#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - return sum of all it parameters
 * @n: first parameter
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0, sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}

	va_end(ap);

	return (sum);
}
