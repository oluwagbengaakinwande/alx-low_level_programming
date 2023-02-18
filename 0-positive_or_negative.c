#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates a random number and prints whether it's positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is a positive number\n", n);
	}
	else if (n < 0)
	{
		printf("%d is a negative number\n", n);
	}
	else
	{
		printf("The number is zero\n");
	}

	return (0);
}
 
