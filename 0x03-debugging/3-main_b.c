#include <stdio.h>

/**
 * print_remaining_days - Prints the remaining days of a given year
 * @month: The month (1-12)
 * @day: The day (1-31)
 * @year: The year
 *
 * Description: Calculates the number of remaining days in a year
 *              considering if it's a leap year or not.
 */
void print_remaining_days(int month, int day, int year)
{
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;
    int i;

    for (i = 0; i < month - 1; i++)
        total_days += days_in_month[i];

    total_days += day;

    if (month > 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
        total_days++;

    printf("Day of the year: %d\n", total_days);
}

int main(void)
{
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    print_remaining_days(month, day, year);

    return 0;
}

