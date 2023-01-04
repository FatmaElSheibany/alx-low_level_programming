/**
 * _pow_recursion - return value of x raised to the power of y
 * but if y < 0, then x^y = -1
 * @x: the base x
 * @y: the power y
 *
 * Return: value of x to the power of y
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
