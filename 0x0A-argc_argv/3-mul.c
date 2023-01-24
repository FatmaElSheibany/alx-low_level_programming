/**
 * main - multiplies two integers and returns the product
 *
 * @argc: number of arguments received
 * @argv: array of strings, each string being an argument passed to program
 * in command line
 *
 * Return: 1 if argc != 3 (program hasn't received 2 integers to multiply)
 * and 0 if success
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
	if (argc != 3) /* program name + two integers so argc = 3 */
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
