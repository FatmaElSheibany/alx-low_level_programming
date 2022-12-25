/**
 * times_table - prints out the 9 timestable
 *
 * Description: prints out 9 rows, listing multiples of 0 - 9
 */

#include "main.h"

void times_table(void)
{
	int i;
	int j;
	int p;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			p = i * j;

			if (p / 10 == 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
