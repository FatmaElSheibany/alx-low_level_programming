/**
 * print_diagonal - prints \ n number of times, one on each line,
 * thus forming a diagonal
 *
 * @n: number of \ to be printed
 */

#include "main.h"

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			j = i;
			while (j--)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
