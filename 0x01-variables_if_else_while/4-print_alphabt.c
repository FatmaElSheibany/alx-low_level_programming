#include <stdio.h>

/**
 * main - prints alphabets in lowercase except q and e
 *
 * Return: 0 upon successful execution
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{
			ch++;
			continue;
		}

		else
		{
			putchar(ch++);
		}
	}

	putchar('\n');

	return (0);

}
