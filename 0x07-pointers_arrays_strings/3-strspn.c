/**
 * _strspn - get first ? bytes of a string that only contains chars
 * from another given string
 *
 * @s: string to search
 * @accept: string containing the chars to match
 *
 * Return: number of bytes in initial segment of s containing only
 * chars from accept
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int match;
	unsigned int n;

	n = 0;
	while (*s != '\0')
	{
		match = 0;

		/* check if the s char matches any of the chars in accept */
		i = 0;
		while (*(accept + i) != '\0')
		{
			if (*s == *(accept + i))
			{
				match  = 1;
				break;
			}
			i++;
		}
		if (match == 0)
		{
			return (n);
		}
		else
		{
			s++;
			n++;
		}
	}
	return (n);
}
