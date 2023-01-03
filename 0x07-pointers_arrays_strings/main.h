/**
 * This header file contains prototypes of all functions defined 
 * in this project 0x07
 *
 */

/* fills memory with a constant byte */
char *_memset(char *s, char b, unsigned int n);

/* copy n bytes from one memory area to another */
char *_memcpy(char *dest, char *src, unsigned int n);

/* looks for a char in a string s */
char *_strchr(char *s, char c);

/* gets length of a prefix substring i.e. substring containing only chars
 * from a certain string 
 */
unsigned int _strspn(char *s, char *accept);

/* locates first occurrence of any of a set of bytes in a string */
char *_strpbrk(char *s, char *accept);


