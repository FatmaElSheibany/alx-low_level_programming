#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 *
 * Return: 0 upon successful execution
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch++);
	}

	putchar('\n');

	return (0);

}
