#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	/* print lowercase alphabet */
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	/* print uppercase alphabet */
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}

