#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates last digit of random number
 *
 * Description - checks last digit of random number
 * and checks whether it's 0, 1-5 or 6-9
 *
 * Return: 0 after successful execution
 */

int main(void)
{
	int n;
	int rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	rem = n % 10;

	if (rem > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, rem);
	else if (rem == 0)
		printf("Last digit of %d is %d and is 0\n", n, rem);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rem);

	return (0);
}
