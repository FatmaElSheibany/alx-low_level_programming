/**
 * _strlen_recursion - returns length of a string
 *
 * @s: the string
 *
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(++s) + 1);
}
