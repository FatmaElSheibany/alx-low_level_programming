/**
 * print_triangle - prints a triangle of #
 *
 * @size: size of the triangle
 *
 * Description: prints 'size' rows, each row i having i # printed on it,
 * preceded with spaces, in such a way that a triangle is formed.
 *
 */

#include "main.h"

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		/* print size rows */
		for (i = size; i > 0; i--)
		{
			j = 1;
			while (j <= size)
			{
				/* in each row, print ' ' from pos 1 till i - 1 */
				if (j <= i - 1)
					_putchar(' ');
				/* then print # till pos size */
				else
					_putchar('#');
				j++;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
