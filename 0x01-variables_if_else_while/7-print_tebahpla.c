#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse
 *
 * Return: 0 upon successful execution
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch--);
	}

	putchar('\n');

	return (0);

}
