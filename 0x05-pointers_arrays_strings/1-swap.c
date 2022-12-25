/**
 * swap_int - swaps values of the targets of two int pointers
 * Note - target refers to what the pointer points to
 *
 * @a: the first integer
 * @b: the second integer
 *
 */

void swap_int(int *a, int *b)
{
	int tmp; /* temporary placeholder during the switch */

	tmp = *a; /** the * means I'm assigning the value of the target of the pointer
		   * and not the value of the pointer itself, which would be the
		   * address of the target
		   */
	*a = *b;
	*b = tmp;
}
