/**
 * _strcpy - copies a string from one pointer to another
 *
 * @dest: the destination pointer
 * @src: the origin pointer
 *
 * Return: the pointer to dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int end = 0; /* tracks the null char */

	i = 0;
	while (end == 0)
	{
		if (*(src + i) == '\0')
			end = 1; /* reached null char = end of string */
		*(dest + i) = *(src + i); /* copy ith char from str to dest */
		i++;
	}

	return (dest);
}
