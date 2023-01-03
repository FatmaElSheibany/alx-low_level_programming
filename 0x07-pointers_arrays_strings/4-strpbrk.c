/**
 * _strpbrk - search a string for any of a set of bytes
 *
 * @s: string to search
 * @accept: string containing the chars to match
 *
 * Return: pointer to byte in s containing first occurrence of
 * any of the chars in accept or NULL
 *
 */

#include <stdio.h>

/* including stdio.h because we're using NULL */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int match;

	/* iterate through each char in s checking if it matches any in accept */
	i = 0;
	while (*(s + i) != '\0')
	{
		match = 0;

		/* check if the ith char in s is included in the accept string */
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				match  = 1;
				break; /* as soon as you find a match, break */
			}
			j++;
		}

		if (match == 1)
		{
			/* return pointer to where the match was found */
			return (s + i);
		}

		i++;

	}

	/* at this point, none of the accept chars were found so */
	return (NULL);
}
