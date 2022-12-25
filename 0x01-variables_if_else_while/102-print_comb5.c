#include <stdio.h>

/**
 * main - prints all possible pairs of 0 - 99
 *
 * Description: only putchar can be used (a max of 8 times)
 * can't have any variable of type char.
 * the digits in a pair must be different,
 * 01 00 and 00 01 are considered the same pair so only the
 * smallest pair should be printed.
 * numbers should be in ascending order
 * print new line at the end of the last number
 *
 * Return: 0 upon successful execution
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(j / 10 + '0');
			putchar(j % 10 + '0');

			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}

	putchar('\n');

	return (0);
}
