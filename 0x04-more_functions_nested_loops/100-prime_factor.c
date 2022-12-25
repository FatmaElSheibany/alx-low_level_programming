/**
 * main - prints largest prime factor of 612_852_475_143
 *
 * Return: 0 if successful
 */

#include <stdio.h>

int main(void)
{
	unsigned long int n, i, j, largest_prime;
	int is_prime;


	n = 612852475143;

	for (i = 2; i <= n; i++) /** you may set condition as n > 1
				  *(instead of i <= n) to keep checking for factors till n = 1
				  */
	{
		while (n % i == 0) /** keep checking if i is a factor before incrementing
				    *  because n may have changed
				    */
		{
			is_prime = 1;
			for (j = 2; j <= i / 2; j++) /* a number i can not have a factor > i/2 */
			{
				if (i % j == 0) /* checking if i is also prime */
				{
					is_prime = 0;
					break;
				}
			}

			if (is_prime == 1)
			{
				n /= i; /* divide n by i and continue factorizing */

				largest_prime = i;
			}
		}
	}
	printf("%lu\n", largest_prime);
	return (0);
}
