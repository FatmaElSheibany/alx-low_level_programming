#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Description: uses only putchar (every other function
 * i.e. printf, puts, etc is not allowed). uses putchar
 * a max of 3 times
 *
 * Return: 0 upon successful execution
 */

int main(void)
{
	int i = 0;
	char c = 'a';

	while (i < 10)
	{
		putchar(i++ + '0');
	}

	while (c <= 'f')
	{
		putchar(c++);
	}

	putchar('\n');

	return (0);
}
