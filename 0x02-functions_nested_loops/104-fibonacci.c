#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int prev = 1, curr = 2, next;
	int count = 2;
	printf("%d, %d", prev, curr);
	while (count < 98)
	{
	next = prev + curr;
	printf(", %d", next);
	prev = curr;
	curr = next;
	count++;
	}
	printf("\n");
	return (0);
}
