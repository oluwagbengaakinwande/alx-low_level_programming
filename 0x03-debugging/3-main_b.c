#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: Calculates the day number of a given date
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *month = "02";
	char *day = "29";
	char *year = "2000";
	int result;

	result = convert_day(month, day);

	printf("%s/%s/%s is day %d of the year 2000\n", month, day, year, result);

	return (0);
}
