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
	long int len;
	
	printf("sizeof (a) = %ld -- sizeof(a[4]) = %ld\n", sizeof(a), sizeof(a[4]));

	len = sizeof(a) / sizeof(a[0]); /* get size of array */
	
	printf("len = %ld\n", len);

	if (n >= len)
		n = len;
	else if (len == 0)
		return; 

	i = 0; 
	while (i < n - 1)
	{
		printf("i = %d\n", i);
		printf("%dth element = %d\n", i, a[i]);
		i++;
		printf("now i = %d\n-----\n", i);
	}
	printf("last element to be printed = %d\n", a[i]);
}

