#include <stdio.h>

/**
 * Swap_int - Swaps the values of two integers.
 * @a - The first integers to be swapped.
 * @b - the second integers to be swapped.
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
