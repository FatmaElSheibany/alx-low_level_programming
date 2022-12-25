/**
 * main - prints the first 50 numbers in the fibonacci series
 *
 * Note: the 50th fibonacci number is > 12 x 10^6 so to accomodate that
 * you'll have to use the appropriate integer data type (i'll use
 * unsigned long long int [%llu] consuming 8 bytes and goes up to
 * 18.something x 10^18
 * ISO C90 does not allow long long declarations so alternative was
 * unsigned long which -m64 systems has the same range as llu.
 *
 * Return: 0 if successful
 */

#include <stdio.h>

int main(void)
{
	unsigned long f1;
	unsigned long f2;
	unsigned long tmp;
	int r;

	f1 = 0;
	f2 = 1;

	r = 1; /*r represents the pos of the fibonacci number to be printed*/
	while (r < 50)
	{
		/*using tmp as a storage just as needed*/
		tmp = f2 + f1;
		printf("%lu, ", tmp);
		f1 = f2;
		f2 = tmp;

		r++;
	}
	printf("%lu\n", f2 + f1);

	return (0);
}
