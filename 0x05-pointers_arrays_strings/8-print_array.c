#include <stdio.h>

/**
 * print_array - prints n elements of an int array
 *
 * @a: pointer to the int array
 * @n: number of elements to print
 *
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[i]);
}

