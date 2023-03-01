#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - Takes a date and prints how many days are
 *                        left in the year, taking leap years into account.
 *
 * @month: Month in number format.
 * @day: Day of month.
 * @year: Year.
 *
 * Return: void.
 */

void print_remaining_days(int month, int day, int year)
{
	int days_remaining = 0;
	int days_in_feb = 28;
	
	if (year % 4 == 0)
		{
		if (year % 100 == 0)
		{
		if (year % 400 == 0)
		{
		days_in_feb = 29;
		}
	}
	else
	{
	days_in_feb = 29;
	}
	}
	
	if (month == 1)
	{
	days_remaining = 365 - day;
	}
	else if (month == 2)
	{
	days_remaining = 365 - (31 + day);
	}
	else
	{
	int days_in_month[] = {31, days_in_feb, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	days_remaining = 365 - day_of_year(month, day, days_in_month) - (days_in_feb - 28);
	}
	
	printf("Remaining days: %d\n", days_remaining);
}
