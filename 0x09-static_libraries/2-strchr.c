/**
 * _strchr - locate a char in a string
 *
 * @s: pointer to string to search
 * @c: char to locate
 *
 * Return: pointer to first occurrence of char c in string s
 *
 */

#include <stdio.h>

char *_strchr(char *s, char c)
{
	int i;
	int found;

	found = 0;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			found = 1;
			break;
		}
		i++;
	}

	if (c == '\0')
		found = 1;

	if (found == 0)
		return (NULL);
	else
		return (s + i);
}

