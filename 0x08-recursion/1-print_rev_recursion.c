/**
 * _print_rev_recursion - prints a string in reverse, followed by a new line
 *
 * @s: the string to print
 *
 */

#include "main.h"

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(++s);
	_putchar(*(--s)); /**
			   * --s because at this point of any ith call
			   * (ith char in s), the value of s points to the
			   * i+1th char so we decrement so s points to the
			   * ith char, then we print
			   */
}
