#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int prev = 1, curr = 2, next;
	int sum = 2; /* initialize with 2 because curr is even */
	
	while (curr <= 4000000)
	{
	next = prev + curr;
	if (next % 2 == 0)
	{
		sum += next;
	}
	prev = curr;
	curr = next;
	}
	
	printf("%d\n", sum);
	
	return (0);
}
