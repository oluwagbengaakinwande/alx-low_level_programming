#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - Takes a date and prints how many days are left
 *                        in the year, taking leap years into account.
 * @month: Month in number format.
 * @day: Day of month.
 * @year: Year.
 *
 * Return: void.
 */
void print_remaining_days(int month, int day, int year)
{
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int total_days = 0, i;

	/* Calculate the total number of days for the year */
	for (i = 0; i < month - 1; i++)
	{
	total_days += days_in_month[i];
	}
	total_days += day;

	/* Check if it's a leap year and adjust days in February accordingly */
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
	days_in_month[1] = 29;
	}

	/* Check for invalid date */
	if (month < 1 || month > 12 || day < 1 || day > days_in_month[month - 1])
	{
	printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
	else
	{
	printf("Day of the year: %d\n", total_days);

	if (days_in_month[1] == 28 && total_days >= 60)
	{
		printf("Remaining days: %d\n", 365 - total_days + 1);
	}
	else
	{
		printf("Remaining days: %d\n", 366 - total_days);
	}
	}
}
