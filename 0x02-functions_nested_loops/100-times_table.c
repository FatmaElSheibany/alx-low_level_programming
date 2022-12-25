/**
 * print_times_table - prints out an n timestable
 * @n: determines size of timetable to print
 *
 * Description: prints out an n+1 x n+1 matrix, listing multiples of 0 - n
 */

#include "main.h"

void print_times_table(int n)
{
	int i;
	int j;
	int p;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				p = i * j;
				if (p / 10 == 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}
				else if (p / 100 == 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(p / 10 + '0');
					_putchar(p % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(p / 100 + '0');
					_putchar(((p % 100) / 10) + '0');
					_putchar(((p % 100) % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
