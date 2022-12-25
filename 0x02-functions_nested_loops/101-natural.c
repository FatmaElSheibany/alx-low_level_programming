/**
 * main - computes and prints sum of all multiples of 3 or 5 less than 1024
 *
 * Return: 0 if successful
 */

#include <stdio.h>

int main(void)
{
	int i;
	int sum;

	i = 1;
	sum = 0;
	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
