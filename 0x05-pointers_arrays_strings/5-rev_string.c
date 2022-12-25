/**
 * rev_string - reverses a string and saves it to the same pointer
 *
 * @s: pointer to string
 *
 * Algo_1: reverse the string and store it right after it ends. then 
 * set the pointer s to point to the address of its last char
 * this way the pointer s now points to its reversed string. 
 * do not alter the value of s till the very end of the program.
 * use temp variables to store other addresses during the program
 * 
 * Fail_1: you can't change teh address that a char *  pointer points
 * to if that pointer was originally an array name. e.g. char str[] 
 * is also a char *str which points to the address of the first elt. 
 * in this case you can't then change the addresss taht str points to. 
 * you get a segmentation fault. at least that's' what i'm understanding
 * so far
 */

#include "main.h"
#include <stdio.h>

void main()
{
	char *str;

	str = "Whatever";
	printf("%s\n", str);
	
	rev_string(str);
	printf("%s\n", str);
}

void rev_string(char *s)
{
	int len;
	int i;
	int j;

	len = _strlen(s); /* get length of string */
	
	i = len; /* index right after last char (i.e. after null) */
	j = len - 1; /* last char of teh str */

	while (i < 2 * len)
	{
		s[i] = s[j]; /* storing the string in reverse */
		i++; /* tracks reversed string */
		j--; /* tracks original string */
	}
	
	/* setting s to point to address of first char of reversed string */
	printf("%s\n", s);
}


/**
 * _strlen - return length of string
 *
 * @s: pointer to string
 *
 * Return: length of string
 *
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != 0)
	{
		len++;
		s++;
	}

	return (len);
}
