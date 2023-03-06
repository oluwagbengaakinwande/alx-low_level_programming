#include "main.h"
#include <stdio.h>

/**
 * add_integers - adds two integers and returns the result
 * @x: the first integer to add
 * @y: the second integer to add
 *
 * Return: the sum of x and y
 */
int add_integers(int x, int y)
{
	return x + y;
}

/**
 * main - entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int a = 3;
	int b = 4;
	int result = add_integers(a, b);

	printf("%d + %d = %d\n", a, b, result);
	return 0;
}
