i/**
 * main - prints the string "_putchar" using putchar
 *
 * Return: 0 upon successful execution
 */

#include <stdio.h>

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');

	return (0);
}

