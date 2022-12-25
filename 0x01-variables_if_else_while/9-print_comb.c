#include <stdio.h>

/**
 * main - prints 0 - 9 separated by commas
 *
 * Return: 0 upon successful execution
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i++ + '0');
		if (i < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
