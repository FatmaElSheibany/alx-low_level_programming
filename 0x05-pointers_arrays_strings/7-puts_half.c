#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints second half of a string
 *
 * @str: pointer to str to be printed
 *
 */

void puts_half(char *str)
{
	char *cpystr;
	long int len;
	int i;

	cpystr = str;
	len = 0;

	/* iterate over a copy of the str so str pointer doesn't change position */
	while (*cpystr != '\0')
	{
		len++; /* get length of str via counting non-\0 chars */
		cpystr++;
	}

	/* if len is odd, print second half of str, skip middle char */
	if (len % 2 == 0)
		i = len / 2;
	else
		i = len / 2 + 1;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
