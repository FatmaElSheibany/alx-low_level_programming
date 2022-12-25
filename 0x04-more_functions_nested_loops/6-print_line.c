/**
 * print_line - prints a line by printing n '_', if n <= 0, print a new line
 * @n: number of _ to print; if <= 0, just print a new line
 */

#include "main.h"

void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');

}
