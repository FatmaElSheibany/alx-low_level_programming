/**
 * _isupper - checks if letter is uppercase
 * @c: the letter to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */

#include "main.h"

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
