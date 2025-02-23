#include <stdio.h>
#include <stdlib.h>

/*
Write a program to perform date arithmetic such as how many days there are between 6/6/90 and 4/3/92. Include a specification and a code design.

Date arithmetic has always baffled me.
How am I supposed to translate this to number of days?

Lets start small.

How many days are between 6/6/90 and 7/4/90?

To determine if a year is a leap year, you can divide it by 4. If it's evenly divisible by 4, it's a leap year. However, if the year is also divisible by 100, you need to check if it's also divisible by 400.
*/

// array of 12 integers that represent the amount of days in each month
int year[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int start_year;
int start_month;
int start_day;
int end_year;
int end_month;
int end_day;

/*
 * - Example use of program 
 *
 * $ ./7-2 06/15/1999 07/10/2000
 * $ Output: 391 days
 *
*/

int main(int argc, char *argv[]){
  char start_date[11] = "06/15/1999";
  char end_date[11] = "07/10/2000";

  sscanf(start_date, "%d/%d/%d", &start_month, &start_day, &start_year);
  sscanf(end_date, "%d/%d/%d", &end_month, &end_day, &end_year);

  printf("given starting date: %d %d %d\n", start_month, start_day, start_year);
  printf("given ending date: %d %d %d\n", end_month, end_day, end_year);
  
  int daysBetweenMonths = 0;
  int daysBetweenDays = 0;
  int daysBetweenYears = 0;

  // for loop to find the amount of days between given months
  for (int i=start_month; i<end_month; i++){
    daysBetweenMonths = daysBetweenMonths + year[i];
    printf("%d\n", daysBetweenMonths);
  }

  daysBetweenDays = start_day - end_day;

  daysBetweenYears = (end_year - start_year) * 365;

  printf("daysBetweenMonths: %d daysBetweenDays: %d daysBetweenYears: %d\n", daysBetweenMonths, daysBetweenDays, daysBetweenYears);
  printf("total days apart: %d\n", daysBetweenYears+daysBetweenDays+daysBetweenMonths);



//  printf("Difference between %d and %d is %d years. Which is %d days.\n", end_year, start_year, end_year - start_year, (end_year - start_year) * 365);
//  printf("Difference between %d and %d is %d months. Which is %d days.\n", end_month, start_month, end_month - start_month, (end_month - start_month) * 


  return (0);
}
