/**
 * print_to_98 - prints all whole numbers from n to 98
 * @n: starting number
 */

#include <stdio.h>

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n--);

			if (n != 97)
			{
				printf(", ");
			}
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n++);

			if (n != 99)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
