#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(i + 'a');
	}

	putchar('\n');

	return (0);
}

