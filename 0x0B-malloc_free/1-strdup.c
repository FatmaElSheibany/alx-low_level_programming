/**
 * _strdup - returns pointer to a new string containing a duplicate of the
 * string given as parameter
 *
 * @str: the original string to be duplicated
 *
 * Return: pointer to duplicate string or NULL if fails
 *
 */

#include <stdlib.h>

char *_strdup(char *str)
{
	int i;
	int j;
	char *dup;

	i = 0;

	if (str == NULL)
		return (NULL);

	/* get size of given str parameter */
	while (*(str + i) != '\0')
		i++;

	/* size of str = i + 1 including the '\0' */
	i++;

	/* allocate i bytes for dup and copy str into it */

	dup = malloc(i * sizeof(*str));

	if (dup == NULL)
		return (NULL);

	j = 0;
	while (j < i)
	{
		dup[j] = str[j];
		j++;
	}

	return (dup);
}
