#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates a random number and prints its last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("The random number is: %d\n", n);
	printf("The last digit of the random number is: %d\n", abs(n) % 10);

	return (0);
}

