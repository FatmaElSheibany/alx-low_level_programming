/**
 * This is the header file containing all functions that I'll define
 * as part of this project, including _putchar. 
 *
 */

int _putchar(int);

/* this converts value of whatever n points to, to 98 */
void reset_to_98(int *n);

/* this swaps the values of two integers */
void swap_int(int *a, int *b);

/* returns length of a string */
int _strlen(char *s);

/* prints a string to stdout */
void _puts(char *str);

/* prints string in reverse to stdout */
void print_rev(char *s);

/* reverses a string */
void rev_string(char *s);

/* prints every other char of str, starting with the first char */
void puts2(char *str);

/* prints second half of string */
void puts_half(char *str);

/* prints n elements of an array of int */
void print_array(int *a, int n);

/* copies string from one pointer to another */
char *_strcpy(char *dest, char *src);

