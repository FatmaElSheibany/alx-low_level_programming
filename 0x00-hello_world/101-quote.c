#include <stdio.h>

/**
 * main - prints a string, followed by new line, to stderr
 *
 * Return: returns 1 upon successful execution
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, 1, sizeof(str), stderr);

	return (1);
}
