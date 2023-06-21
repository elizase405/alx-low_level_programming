
#include "main.h"

/**
 * print_alphabet - Entry point
 * Description - prints alphabet in lowercase
 * Return: (0)
 */

void print_alphabet(void)
{
        char a = 'a';

        while (a <= 'z')
        {
                _putchar(a);
                a++;
        }
        return;
}
