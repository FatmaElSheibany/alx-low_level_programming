/**
 * _memset - stores a char b in all n bytes immediately following a given
 * memory address
 *
 * @s: pointer to the starting memory address
 * @b: the char to store
 * @n: number of bytes of following s in which to store the char b
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		/* store b in the ith address block (byte) following s */
		*(s + i) = b;
		i++;
	}

	return (s);
}

