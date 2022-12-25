/**
 * more_numbers - prints numbers 0 to 14, 10 times
 */

#include "main.h"

void more_numbers(void)
{
	int c;
	int i = 1;

	while (i++ <= 10)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar(c / 10 + '0');

			_putchar(c % 10 + '0');
		}
	_putchar('\n');

	}
}
