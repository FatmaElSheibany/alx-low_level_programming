/**
 * puts_half - prints second half of a string
 *
 * @str: pointer to str to be printed
 *
 */

#include "main.h"

void puts_half(char *str)
{
	char *cpystr;
	int len;
	int i;

	len = 0;

	/* iterate over a copy of the str so str pointer doesn't change position */
	while (*cpystr != '\0')
	{
		len++;
		cpystr++;
	}

	for (i = len / 2; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
