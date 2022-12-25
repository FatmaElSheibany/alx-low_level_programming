/**
 * _strlen - returns length of a string
 *
 * @s: char pointer to the string
 *
 * Return: the length of string
 *
 */

int  _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != 0) /* while not null (last character of a string) */
	{
		len++; /* count the characters in the string */
		s++; /* check next char in string */
	}

	return (len);
}
