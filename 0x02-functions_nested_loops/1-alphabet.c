/**
 * print_alphabet - a function defined to print alphabets in lowercase
 */

#include "main.h"

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c++);
	}
	_putchar('\n');
}
