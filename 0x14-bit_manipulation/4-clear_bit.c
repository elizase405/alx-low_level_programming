/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: pointer to integer value
 * @index: index of bit
 *
 * Return: 1 if success, -1 if failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int f = 1 << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= (~f);
	return (1);
}
