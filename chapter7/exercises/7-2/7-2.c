#include <stdio.h>

/*
Write a program to perform date arithmetic such as how many days there are between 6/6/90 and 4/3/92. Include a specification and a code design.

Date arithmetic has always baffled me.
How am I supposed to translate this to number of days?

Lets start small.

How many days are between 6/6/90 and 7/4/90?

To determine if a year is a leap year, you can divide it by 4. If it's evenly divisible by 4, it's a leap year. However, if the year is also divisible by 100, you need to check if it's also divisible by 400.
*/

/* 12/12/22 */
int start_month;
int start_day;
int start_year;

int end_month;
int end_day;
int end_year;

char line[100];
char line1[100];

int year_nums[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int leap_year_nums[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
  start_month = 0;
  start_day = 0;
  start_year = 0;

  end_month = 0;
  end_day = 0;
  end_year = 0;

  printf("Calculate the amount of days between two dates.\n"); 
  printf("(e.g. 12/12/22)\n");

  printf("\nFirst date: ");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d/%d/%d", &start_month, &start_day, &start_year);

  printf("End date: ");
  fgets(line1, sizeof(line1), stdin);
  sscanf(line1, "%d/%d/%d", &end_month, &end_day, &end_year);

  printf("%d/%d/%d\n", start_month, start_day, start_year);
  printf("%d/%d/%d\n", end_month, end_day, end_year);

  return (0);

}
