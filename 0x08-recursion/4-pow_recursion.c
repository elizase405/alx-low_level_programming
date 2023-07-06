/**
 * _pow_recursion - returns the value of x raise to the power of y
 * @x: value to be raised
 * @y: how many times to raise it
 *
 * Return: x raise y times (int)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
