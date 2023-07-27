#include <stdarg.h>
#include <stdio.h>


void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_all - prints anything
 * @format: a list of types of argu
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i;

	/*for (i = 0; format[i] != 0; i++)
		continue;
		*/

	i = 0;
	while (format[i] != 0)
	{
		if (format[i] == 'c')
			print_char(ap);
		/*else if (format[i] == 'i')
			//print_int(ap);
		else if (format[i] == 's')
			print_str(ap);*/
		i++;
	}

	va_end(ap);

	printf("%d\n", i);
}
