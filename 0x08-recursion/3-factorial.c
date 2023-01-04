/**
 * factorial - returns factorial of a given int n
 *
 * @n: the integer whose factorial is to be computed
 *
 * Return: int = factorial of n
 *
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
