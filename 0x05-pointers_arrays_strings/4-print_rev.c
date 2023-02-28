#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line
 *
 * @s: The string to print in reverse
 */
void print_rev(char *s)
{
	int i, j;
	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
	putchar(s[j]);
	}

	putchar('\n');
}
