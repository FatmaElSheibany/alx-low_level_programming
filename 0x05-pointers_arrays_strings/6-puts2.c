/**
* puts2 - prints every other char of a string starting with the first
*
* @str: pointer to str to print
*
*/

#include "main.h"

void puts2(char *str)
{
	char *cpystr;
	int len;
	int i;

	cpystr = str;
	len = 0;
	/* loop over copy of str so orig str doesn't change its address */
	while (*cpystr != '\0')
	{
		len++; /* count length of str till you run into null char */
		cpystr++;
	}

	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
