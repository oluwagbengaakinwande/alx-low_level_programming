#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int prev = 1, curr = 2, next, count;
	
	printf("%d, %d", prev, curr);
	for (count = 3; count <= 50; count++)
	{
	next = prev + curr;
	printf(", %d", next);
	prev = curr;
	curr = next;
	if (next > 20365011074)
	break;
	}
	printf("\n");
	return 0;
}
