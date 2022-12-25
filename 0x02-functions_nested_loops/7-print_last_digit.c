/**
 * print_last_digit - prints and returns last digit of a number
 * @n: number whose last digit will be printed
 *
 * Description: including the 6-abs.c file in which the _abs(int)
 * function is defined (it computes the absolute value of an int
 * and returns it.
 *
 * Return: absolute value of last digit of n
 */

#include "main.h"
#include "6-abs.c"

int print_last_digit(int n)
{
	n = _abs(n % 10);
	/**
	 * get last digit first then take abs value
	 * _abs(n) doesn't work on large neg numbers like INT_MIN
	 * so better get last digit first then take _abs()
	 */
	_putchar(n + '0');

	return (n % 10);
}

