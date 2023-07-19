/**
 * print_name - function to print name using function pointer
 * @name: name to be printed
 * @f: function pointer to function to actually print name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
