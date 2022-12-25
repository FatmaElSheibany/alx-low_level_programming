#include <stdio.h>

/**
 * main - prints all possible pairs of 0 - 9
 *
 * Description: only putchar can be used (a max of 5 times)
 * can't have any variable of type char.
 * the digits in a pair must be different,
 * 01 and 10 are considered the same pair so only the
 * smallest pair should be printed.
 * numbers should be in ascending order
 * print new line at the end of the last number
 *
 * Return: 0 upon successful execution
 */

int main(void)
{
	int i = 0;
	int j;

	while (i < 9)
	{
		j = i + 1;
		while (j < 10)
		{
			putchar(i + '0');
			putchar(j++ + '0');
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');

	return (0);
}
