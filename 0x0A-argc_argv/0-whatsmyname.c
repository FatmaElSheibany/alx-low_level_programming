/**
 * main - program that prints its name
 *
 * @argc: number of arguments passed to main program in command line
 * @argv: array of strings i.e. arguments passed to program in command line
 *
 * Return: 0 if success
 *
 */

#include <stdio.h>
#include "main.h"

int main(__attribute__ ((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]); /*prints program neme*/
	return (0);
}

