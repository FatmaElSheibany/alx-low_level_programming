/**
 * print_square - prints n rows of n '#' thus forming a square
 * @size: number of rows (and # in each row) to print therefore size of square
 */

#include "main.h"

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			j = size;
			while (j--)
				_putchar('#');
			_putchar('\n');
		}
	}
}

