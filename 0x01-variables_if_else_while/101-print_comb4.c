#include <stdio.h>

/**
 * main - prints all possible triplets of 0 - 9
 *
 * Description: only putchar can be used (a max of 6 times)
 * can't have any variable of type char.
 * the digits in a triplet must be different,
 * 012, 021, 201, 210 are all considered the same so only the
 * smallest triplet should be printed.
 * numbers should be in ascending order
 * print new line at end of last number.
 *
 * Return: 0 upon successful execution
 */

int main(void)
{
	int i = 0;
	int j;
	int k;

	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k < 10)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k++ + '0');
				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
