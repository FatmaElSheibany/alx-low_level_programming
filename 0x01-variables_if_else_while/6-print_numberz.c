#include <stdio.h>

/**
 * main - prints single digits of base 10 starting with 0
 *
 * Return: 0 upon successful execution
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n++ + '0');
	}
	putchar ('\n');

	return (0);

}
