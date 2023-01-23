/**
 * main - program that prints number of arguments passed to it excluding
 * program name
 *
 * @argc: number of arguments passed to main program in command line
 * @argv: array of strings i.e. arguments passed to program in command line
 *
 * Return: 0 if success
 *
 */

#include <stdio.h>
#include "main.h"

int main(int argc, __attribute__ ((unused))char *argv[])
{
	printf("%d\n", --argc); /*prints number of arguments*/
	return (0);
}

