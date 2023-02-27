#include <stdio.h>

/**
 * Swap_int - Swaps the values of two integers.
 * @a - The first integers to be swapped.
 * @b - the second integers to be swapped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the value of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
