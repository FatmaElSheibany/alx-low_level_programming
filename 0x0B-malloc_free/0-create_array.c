/**
 * create_array - creates an array of chars and initializes it with a
 * specific char
 *
 * @size: size of array
 * @c: the specific char
 *
 * Return: pointer to array if success; NULL if fails or size = 0
 *
 */

#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	/**
	 * allocate size bytes for storing the char c size times in the
	 * pointer str
	 */
	str = malloc(size * sizeof(char));

	if (str == NULL || size == 0)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
