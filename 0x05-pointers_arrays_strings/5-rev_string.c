/**
 * rev_string - reverses a string and saves it to the same pointer
 *
 * @s: pointer to string
 *
 * Algo: find length of string then initiate 2 variables, one set
 * to start from 0 moving forward and the other from len - 1 moving backwards.
 * then exchange chars on opposite ends of string. so for a str of 9 chars,
 * 1st and 9th are exchanged, then 2nd and 8th, 3rd and 7th, 4th and 6th, 5th
 * remains thus now if you print the string, its reversed
 *
 */

#include "main.h"

void rev_string(char *s)
{
	int len;
	int i;
	int j;
	char tmp;

	len = _strlen(s); /* get length of string */

	i = 0;
	j = len - 1; /* set j to last char of string */

	/* exchanging chars at opposite ends of str */
	while (i < len / 2)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;

		i++;
		j--;
	}
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
