/**
 * print_sign - prints sign of a number i.e. +, - or 0
 * @n: number to checked for its sign
 *
 * Return: 1 if n > 0, -1 if n < 0, 0 if n = 0
 */

#include "main.h"

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
