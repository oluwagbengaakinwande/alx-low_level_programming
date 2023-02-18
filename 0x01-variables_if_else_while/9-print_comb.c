#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 9 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

