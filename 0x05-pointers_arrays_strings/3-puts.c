/**
 * _puts - prints a string to stdout
 *
 * @str: pointer to string that is to be printed
 *
 */

#include "main.h"

void _puts(char *str)
{
	while (*str != 0) /* while char is not null */
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
