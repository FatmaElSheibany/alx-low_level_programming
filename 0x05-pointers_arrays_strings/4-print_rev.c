/**
 * print_rev - prints string in reverse
 *
 * @s: pointer to string
 *
 */

#include "main.h"

void print_rev(char *s)
{
	int len;

	len = _strlen(s); /* get length of string */

	while (len--) /* starting from last character at index len - 1 till index 0 */
	{
		_putchar(*(s + len));
	}
	_putchar('\n');
}

/**
 * _strlen - return length of string
 *
 * @s: pointer to string
 *
 * Return: length of string
 *
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != 0)
	{
		len++;
		s++;
	}

	return (len);
}

