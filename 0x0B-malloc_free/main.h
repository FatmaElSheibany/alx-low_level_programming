/**
 * this is the header file main.h containing prototypes of all functions
 * defined as part of the 0x0B project in the ALX SE Curriculum
 */

/* creates array of size "size" and initializes it with the char "c" */
char *create_array(unsigned int size, char c);

/* returns a pointer to a newly allocated space in memory, which contains a 
 * copy of the string given as a parameter 
 */

char *_strdup(char *str);

/* concatenates two strings */
char *str_concat(char *s1, char *s2);

/* returns a pointer to a 2D array of int */
int **alloc_grid(int width, int height);

/* frees the memory allocated for a 2D grid */
void free_grid(int **grid, int height);


