/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: if success -->  pointer to newly allocated space in memory
 * containing s1+s2 (null terminated); NULL if fails
 *
 */

#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int size1;
	int size2;
	int sizestr;
	int i;
	char *str;

	/* get size fo each string */

	size1 = 0;

	if (s1 != NULL)
	{
		while (*(s1 + size1) != '\0')
			size1++;
	}
	
	size2 = 0;

	if (s2 != NULL)
	{
		while (*(s2 + size2) != '\0')
			size2++;
	}

	/* required bytes for concatenated string str = size1 + size2 + 1 */
	/* 1 is for the null terminator */

	str = malloc((size1 + size2 + 1) * sizeof(*s1));

	if (str == NULL)
		return (NULL);

	sizestr = size1 + size2 + 1;

	i = 0;
	while (i < sizestr - 1)
	{
		if (i < size1)
			str[i] = s1[i];
		else
			str[i] = s2[i - size1];
		i++;
	}
	str[i] = '\0';

	return (str);
}
