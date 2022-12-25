#include <stdio.h>

/**
 * main - prints digits 0 - 9
 *
 * Return: 0 upon successful execution
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i++);
	}
	printf("\n");

	return (0);
}
