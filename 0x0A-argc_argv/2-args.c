/**
 * main - program that prints all its arguments, one per line
 *
 * @argc: number of arguments passed to main program in command line
 * @argv: array of strings i.e. arguments passed to program in command line
 *
 * Return: 0 if success
 *
 */

#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	int i; 

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]); /*prints program arguments*/
		i++;
	}
	return (0);
}

