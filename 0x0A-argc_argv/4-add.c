/**
 * main - adds a sequence of integers and prints sum
 *
 * @argc: number of arguments received
 * @argv: array of strings, each string being an argument passed to program
 * in command line
 *
 * Return: 0 if success, else 1
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int i;
	int sum;
	char *s;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		sum = 0;
		i = 1;
		while (i < argc)
		{
			s = argv[i]; /* s points to first char of each argument */

			/* check if each arg is an int */
			while (*s != '\0') /* check each char in each argument string till end */
			{
				if (*s >= '0' && *s <= '9')
				{
					s++;
				}
				else
				{
					/* if char is not an int */
					printf("Error\n"); /* given arg is not an int */
					return (1);
				}
			}

			sum += atoi(argv[i]); /* converting argument to type int and adding */
			i++;
		}

		printf("%d\n", sum);
		return (0);
	}
}
