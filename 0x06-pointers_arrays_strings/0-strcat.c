/**
 * _strcat - concatenates two strings i.e. src onto dest
 *
 * @dest: destination string (first string)
 * @src: string to concatenate onto dest (second string)
 *
 * Return: pointer to resulting string dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(dest + i) != '\0')
		i++; /* go to end of dest string */

	/* i now has the value of the index of null char */
	/* (dest + i) is therefore address of null char of dest */

	while (1)
	{
		*(dest + i) = *src; /* append src char onto dest */

		if (*src == '\0') /* if reached null char, break */
			break;
		src++;
		i++;
	}

	return (dest);
}
